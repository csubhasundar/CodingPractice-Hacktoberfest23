def binary_search(arr, x):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2

        # Check if x is present at mid
        if arr[mid] == x:
            return mid

        # If x greater, ignore the left half
        elif arr[mid] < x:
            left = mid + 1

        # If x is smaller, ignore the right half
        else:
            right = mid - 1

    # If we reach here, then the element was not present
    return -1

# Example:
arr = [2, 3, 4, 10, 40]
x = 10

result = binary_search(arr, x)

if result != -1:
    print(f"Element found at index {result}")
else:
    print("Element not present in array")
