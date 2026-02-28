from PIL import Image
import numpy as np

# Load a handwritten digit image and convert to grayscale
img = Image.open("sample_image.png").convert("L")  # 'L' = grayscale mode

# Resize the image so all images are uniform (like 28x28)
img = img.resize((28, 28))

# Convert to a numeric NumPy array
img_array = np.array(img)

# Flatten to 1D vector 
img_flat = img_array.flatten()

print("Original shape (after resize):", img_array.shape)
print("Flattened shape:", img_flat.shape)

# Show only the first 10 pixel values (avoids overwhelming students)
print("First 10 pixel values:", img_flat[:10])
