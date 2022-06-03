# Check blur.py for full comments on image filtering in python
# The below is a complete code on finding edges in an image

from PIL import Image, ImageFilter

original = Image.open("courtyard.bmp")
filtered = original.filter(ImageFilter.FIND_EDGES)
filtered.save("outEdges.bmp")