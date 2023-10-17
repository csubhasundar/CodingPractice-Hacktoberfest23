import os
from PIL import Image, ImageDraw
import xlrd

def generate_certificate(name, template_path):
    """Generates a certificate for the given name using the given template."""

    template = Image.open(template_path)
    draw = ImageDraw.Draw(template)

    # Write the name of the certificate recipient on the certificate.
    draw.text((100, 100), name, fill=(0, 0, 0), font_size=24)

    # Save the certificate.
    output_path = os.path.join("certificates", name + ".pdf")
    template.save(output_path, format="PDF")

def main():
    """Main function."""

    # Read the Excel data containing the names of the certificate recipients.
    excel_file = xlrd.open_workbook("recipients.xlsx")
    sheet = excel_file.sheet_by_index(0)

    # Get the template path.
    template_path = "certificate_template.pdf"

    # Generate a certificate for each recipient.
    for row in range(1, sheet.nrows):
        name = sheet.cell(row, 0).value
        generate_certificate(name, template_path)

if __name__ == "__main__":
    main()
