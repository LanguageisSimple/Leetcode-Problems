# Instructions and Explanation of the Problem

## Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Example

**Input:**
```
nums = [2, 7, 11, 15], target = 9
```
**Output:**
```
[0, 1]
```

**Explanation:**
```
Because nums[0] + nums[1] == 9, we return [0, 1].
```

## Explanation of the Solution

The solution involves iterating over the list and checking for each pair of numbers if their sum equals the target. If such a pair is found, the indices of these two numbers are returned.

### Approach:

1. **Initialization**: Create an instance of the `Two_Sum` class.
2. **Input Handling**: Read a list of integers and the target value from the user.
3. **Processing**: The `Process_Data` method iterates through the list, checking every possible pair of numbers to see if their sum equals the target.
4. **Output**: If a pair is found, their indices are printed; otherwise, a message indicating that no such pair exists is printed.

## Code Explanation

The answer file `Two_Sum.cpp` contains the answer file where each line has been explained using comments.

### How to Use

1. **Clone the repository** to your local machine using:
   ```sh
   git clone https://github.com/your-org/LeetCode-Problems.git
   ```
2. **Navigate** to the `Two Sum` directory:
   ```sh
   cd LeetCode-Problems/Two\ Sum
   ```
3. **Compile the program** using a C++ compiler:
   ```sh
   g++ -o Two_Sum Two_Sum.cpp
   ```
4. **Run the program**:
   ```sh
   ./Two_Sum
   ```
5. **Follow the prompts** to enter a list of integers and the target value. The program will output the indices of the two numbers that add up to the target.
