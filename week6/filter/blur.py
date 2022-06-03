# Import precisely Image and ImageFilter functions from the python PIL library
from PIL import Image, ImageFilter

"""
This is just a test to a multiline comment.
Python is going to ignore all that is written
between the 3 quotation marks above and below
A single line comment can be made using # as seen
"""

# before, a variable created to open the original image

before = Image.open("courtyard.bmp")

# The filtered image is stored in the after variable
# BoxBlur is a python function that allows you to blur in Box format
# Like BoxBlur(1) blurs 1 pixel above, below, left and right

after = before.filter(ImageFilter.BoxBlur(5))

# .save is a python function to save a defined output file

after.save("outBlur.bmp")

