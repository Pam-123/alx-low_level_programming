# Define the linear_search function
def linear_search(arr, target):
    """
    Perform linear search to find the target value in the array.

    Parameters:
        arr (list): List of integers to be searched.
        target (int): Value to search for in the array.

    Returns:
        int: Index of the target value if found, otherwise -1.
    """
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Example usage:
array = [4, 7, 2, 9, 1, 5]
value_to_find = 9

# Call the function and store the result
index = linear_search(array, value_to_find)

# Check if the value was found
if index != -1:
    print(f"The value {value_to_find} was found at index {index}.")
else:
    print(f"The value {value_to_find} was not found in the array.")

