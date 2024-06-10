# Instructions and Explanation of the Problem

## Problem Statement

You are given the heads of two sorted linked lists `list1` and `list2`. Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

### Example

**Input:**
```
list1 = [1, 2, 4]
list2 = [1, 3, 4]
```
**Output:**
```
[1, 1, 2, 3, 4, 4]
```

**Explanation:**
```
The merged list would be [1, 1, 2, 3, 4, 4].
```

## Solution Explanation

The solution involves merging two sorted lists into one sorted list. The provided Python script merges the lists by iterating through each element of `list2` and appending it to `list1`, and then sorts the combined list.

### Approach

1. **Getting User Input**:
    - The function `get_input(prompt)` is used to get user input and convert it to a list of integers.
    - The user is prompted to enter two lists of integers.

2. **Merging the Lists**:
    - The sizes of both lists are determined using the `len()` function.
    - A nested loop is used to iterate through each element of `list2` and compare it with elements of `list1`.
    - Elements from `list2` are appended to `list1` based on the comparison.

3. **Sorting the Merged List**:
    - The combined list `list1` is sorted using the `sort()` method to ensure the final list is sorted.

4. **Printing the Result**:
    - The merged and sorted list is printed.

### Code Explanation

The code has been explained line by line using comments in the `Merge_Two_Sorted_Lists.py` file.

### How to Use

1. **Run the Script**:
    - Execute the Python script `Merge_Two_Sorted_Lists.py`.

2. **Input**:
    - When prompted, enter the first list of integers separated by spaces.
    - When prompted again, enter the second list of integers separated by spaces.

3. **Output**:
    - The script will print the merged and sorted list.

### Example Usage

```plaintext
Enter the first list of integers separated by spaces: 1 2 4
Enter the second list of integers separated by spaces: 1 3 4
Merged and sorted list: [1, 1, 2, 3, 4, 4]
```

This solution ensures that the two input lists are merged correctly and the final output is a single sorted list containing all elements from both lists.
