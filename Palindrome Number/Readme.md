# Instructions and Explanation of the Problem

## Problem Statement

Given an integer `num`, determine whether it is a palindrome. An integer is a palindrome when it reads the same backward as forward. For example, `121` is a palindrome while `123` is not.

### Example

**Input:**
```
num = 121
```
**Output:**
```
YES
```

**Input:**
```
num = -121
```
**Output:**
```
NO
```

**Explanation:**
A negative number cannot be a palindrome by definition. For a positive number, if the reverse of the number is the same as the original number, it is a palindrome.

## Solution Explanation

The solution involves converting the integer to a string and then checking if the string reads the same backward as forward.

### Approach

1. **Input Handling:** 
   - Read the integer input from the user.
   - If the input number is negative, it is immediately considered not a palindrome.

2. **String Conversion and Reversal:**
   - Convert the number to a string.
   - Create a copy of the string and reverse it.
   - Compare the original string with the reversed string.

3. **Palindrome Check:**
   - If the original string and the reversed string are identical, the number is a palindrome.
   - Otherwise, it is not a palindrome.

### Code Explanation

The answer file `Palindrome.cpp` contains the answer file where each line has been explained using comments.

### How to Use

1. **Compile the Code:**
   - Use a C++ compiler to compile the code. For example, using `g++`:
     ```
     g++ -o Palindrome Palindrome.cpp
     ```

2. **Run the Executable:**
   - Run the compiled executable. For example:
     ```
     ./Palindrome
     ```

3. **Enter the Number:**
   - When prompted, enter the integer you want to check for being a palindrome.

4. **View the Result:**
   - The program will output `YES` if the number is a palindrome and `NO` otherwise.
```