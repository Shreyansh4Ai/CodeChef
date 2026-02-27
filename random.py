import pandas as pd

# Original table
data = pd.DataFrame({
    "Fruit": ["Apple", "Mango", "Banana", "Apple"],
    "Quantity": [10, 15, 7, 12]
})

print("Original Data:")
print(data)  # Students see the original DataFrame

# ----- Label Encoding -----
label_map = {"Apple": 0, "Mango": 1, "Banana": 2}
data["Fruit_Label"] = data["Fruit"].map(label_map)  
# Students should: use the 'map' function with the label_map to convert fruit names to numbers

print("\nAfter Label Encoding:")
print(data)  # Students see how label encoding converts categories to numeric values

# ----- One-Hot Encoding -----
one_hot = pd.get_dummies(data["Fruit"], dtype=int)  
# Students should: use pandas function to create one-hot encoded columns for each fruit

print("\nOne-Hot Encoding:")
print(one_hot)  # Students see each fruit represented as a separate binary column
