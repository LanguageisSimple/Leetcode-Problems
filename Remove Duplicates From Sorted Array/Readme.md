# Instructions and Explanation of the Problem

## Problem Statement

Given a sorted array `nums`, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array; you must do this by modifying the input array in-place with O(1) extra memory.

### Example

**Input:**
```
nums = [1, 1, 2]
```
**Output:**
```
length = 2, nums = [1, 2, _]
```

**Explanation:**
```
Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
```

## Solution Explanation

The solution involves iterating through the sorted array and keeping track of unique elements. We create a new list to store these unique elements and update the original array with these unique elements.

**Approach:**

1. **Initialize a new list**: Create a new list `n_nums` to store unique elements.
2. **Iterate through the input list**: Loop through each element in the input list `nums`.
3. **Check for uniqueness**: For each element, check if it is already in `n_nums`. If not, add it to `n_nums`.
4. **Update the input list**: After processing all elements, update the original list `nums` with the elements in `n_nums`.
5. **Return the new length**: The function returns the length of the updated list.

### Code Implementation

The answer file `Remove_Duplicates_From_Sorted_Array.py` contains the answer file where each line has been explained using comments.

## How to Use

1. **Clone the repository**: Clone this repository to your local machine.
2. **Navigate to the directory**: Go to the `Remove Duplicates from Sorted Array` directory.
3. **Run the script**: Execute the `Remove_Duplicates_From_Sorted_Array.py` script.

```bash
python Remove_Duplicates_From_Sorted_Array.py
```

4. **Input the list**: Enter a list of integers when prompted.
5. **View the result**: The script will display the updated list and the length of the list after removing duplicates.

This solution efficiently removes duplicates from the sorted array by iterating through the list and maintaining a list of unique elements, updating the original list in-place.
