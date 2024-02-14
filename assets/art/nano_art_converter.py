from PIL import Image

def bmp_to_raw_data(bmp_path):
    img = Image.open(bmp_path)

    if img.size == (68, 140):
        img = img.rotate(90, expand=True).transpose(Image.FLIP_LEFT_RIGHT)

    assert img.size == (140, 68), "Image must be 140x68 pixels in size after potential re-orientation"

    img = img.convert('1')

    ascii_art = []
    raw_data = []
    for y in range(img.height):
        current_byte = 0
        bit_position = 7
        ascii_row = ''
        for x in range(img.width):
            if img.getpixel((x, y)):
                ascii_row += '#'
            else:
                current_byte |= 1 << bit_position
                ascii_row += ' '
            bit_position -= 1
            if bit_position < 0:
                raw_data.append(current_byte)
                current_byte = 0
                bit_position = 7
        if bit_position != 7:
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
    bmp_path = "./PIP_ART.bmp"

    ascii_art, raw_data = bmp_to_raw_data(bmp_path)

    print("\nASCII Art Representation:")
    for row in ascii_art:
        print(row)

    c_array_representation = format_as_c_array(raw_data)

    print("\nC Array Representation:")
    print(c_array_representation)