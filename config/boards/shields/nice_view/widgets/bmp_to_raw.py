"""
CHATGPT GENERATED CODE AND DOCS
Using the BMP-to-Raw Data Script with GIMP:

Purpose:
This script is designed to convert a BMP image (preferably 140x68 pixels in size) to a raw data representation, suitable for use in C applications. This document guides you on how to prepare a source image using GIMP before running the script.

Steps:

1. **Obtaining the Source Image**:
   - Begin with any image you have, e.g., a photo taken with a cellphone camera.

2. **Installing GIMP**:
   - If you do not have GIMP installed, download and install it from https://www.gimp.org/downloads/.

3. **Opening the Image in GIMP**:
   - Launch GIMP.
   - Go to File > Open and select your image.

4. **Resizing the Image**:
   - In GIMP, navigate to Image > Scale Image.
   - Set the Width to 140 pixels and Height to 68 pixels. Make sure to maintain the aspect ratio if the original proportions are essential.
   - Click the "Scale" button.

5. **Converting Image to Grayscale**:
   - Navigate to Image > Mode > Grayscale.

6. **Adjusting Image Contrast**:
   - Since we'll be converting the image to a 1-bit representation, enhancing the contrast can help improve clarity.
   - Navigate to Colors > Brightness-Contrast.
   - Increase the contrast slider as required to get a clear distinction between the darker and lighter areas.

7. **Saving as BMP**:
   - Go to File > Export As.
   - Choose a destination and name for the file.
   - From the "Select File Type" dropdown, choose "Windows BMP image."
   - Click "Export" and then "Export" again in the dialog that pops up.

8. **Running the Script**:
   - Ensure you have Python and the PIL module installed.
   - Run the provided script. The default BMP path in the script is "./CIG_ART.bmp". If you've named your file differently or saved it in a different location, make sure to update the `bmp_path` variable in the script accordingly.
   - The script will output an ASCII representation of the image and a C array representation of the image's raw data.

Note:
The script assumes that the BMP image is either 140x68 pixels in size or can be rotated to this orientation. If your image is not in this size after the above steps, you may encounter an assertion error. Make sure the dimensions are correct before proceeding with the script.
"""

from PIL import Image

def bmp_to_raw_data(bmp_path):
    img = Image.open(bmp_path)

    # Check orientation and transpose if necessary
    if img.size == (68, 140):
        img = img.rotate(90, expand=True).transpose(Image.FLIP_LEFT_RIGHT)

    assert img.size == (140, 68), "Image must be 140x68 pixels in size after potential re-orientation"

    img = img.convert('1')  # Convert image to 1-bit pixels

    ascii_art = []
    raw_data = []
    for y in range(img.height):
        current_byte = 0
        bit_position = 7  # Start with the MSB
        ascii_row = ''
        for x in range(img.width):
            if img.getpixel((x, y)):
                ascii_row += '#'
            else:
                current_byte |= 1 << bit_position
                ascii_row += ' '
            bit_position -= 1  # Move to the next bit to the right
            if bit_position < 0:  # Once we've filled a byte
                raw_data.append(current_byte)
                current_byte = 0
                bit_position = 7
        if bit_position != 7:  # If there are remaining bits for the last byte in a row
            raw_data.append(current_byte)
        ascii_art.append(ascii_row)

    return ascii_art, raw_data

def format_as_c_array(data):
    segments = []
    for i in range(0, len(data), 15):
        segment = data[i:i+15]
        segments.append(", ".join(["0x{:02X}".format(byte) for byte in segment]))

    return "{\n    " + ",\n    ".join(segments) + "\n}"

if __name__ == "__main__":
    bmp_path = "./WUB_ART.bmp"

    ascii_art, raw_data = bmp_to_raw_data(bmp_path)

    print("\nASCII Art Representation:")
    for row in ascii_art:
        print(row)

    c_array_representation = format_as_c_array(raw_data)

    print("\nC Array Representation:")
    print(c_array_representation)
