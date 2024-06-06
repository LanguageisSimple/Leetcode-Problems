# Function to get user input and convert it to a list of integers
def get_input(prompt):
    input_str = input(prompt)
    return list(map(int, input_str.split()))

# Get input from the user for both lists
list1 = get_input("Enter the first list of integers separated by spaces: ")
list2 = get_input("Enter the second list of integers separated by spaces: ")

# Determine the sizes of the lists
size1 = len(list1)
size2 = len(list2)

# Merge the two lists by appending elements from list2 to list1
for i in range(0, size1):
    for j in range(0, size2):
        if list2[j] >= list1[i]:
            list1.append(list2[j])
            break

# Sort the merged list
list1.sort()

# Print the sorted list
print("Merged and sorted list:", list1)
