from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Create a new list to store unique elements
        n_nums = []
        # Iterate through the input list
        for element in nums:
            # Check if the element is not already in the new list
            if element not in n_nums:
                # Add the element to the new list
                n_nums.append(element)
        # Update the input list with the unique elements
        nums[:] = n_nums
        # Return the length of the updated list
        return len(nums)

def get_input() -> List[int]:
    # Get a list of integers from the user
    input_str = input("Enter a list of integers separated by spaces: ")
    # Convert the input string to a list of integers
    nums = list(map(int, input_str.split()))
    return nums

sol = Solution()
nums = get_input()
result = sol.removeDuplicates(nums)
print("Updated list:", nums)
print("Length of list after removing duplicates:", result)