# Instructions and Explanation of the Problem

## Problem Statement

Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

### Example

**Input:**
```
strs = ["flower","flow","flight"]
```
**Output:**
```
"fl"
```

**Explanation:**
```
The longest common prefix of the input array is "fl".
```

## Explanation

The problem is to find the longest common prefix from an array of strings. A common prefix for a set of strings is a substring that appears at the beginning of each string. We need to identify the longest such substring.

### Approach

1. **Initialization**:
   - Start with an empty string `common` to store the common prefix.
   - If the input vector `strs` is empty, return the empty `common` string immediately.

2. **First Word Reference**:
   - Take the first word in the list as a reference word `word_1`.

3. **Character Comparison**:
   - Iterate through each character of the reference word.
   - For each character, compare it with the corresponding character in the other words.
   - If a mismatch is found or if a word is shorter than the reference word, return the common prefix found so far.
   - If no mismatch is found, append the character to the `common` prefix.

4. **Return Result**:
   - After completing the iteration, return the `common` prefix, which is the longest common prefix shared by all the strings.

## Code Explanation

The answer file `Longest_Common_Prefix.cpp` contains the answer file where each line has been explained using comments.

## How to Use

### Instructions to Run the Program

1. **Compile the Program**:
   - Use a C++ compiler to compile the `Longest_Common_Prefix.cpp` file.
   - Example command: `g++ -o Longest_Common_Prefix Longest_Common_Prefix.cpp`

2. **Execute the Program**:
   - Run the compiled program.
   - Example command: `./Longest_Common_Prefix`

3. **Input**:
   - The program will prompt you to enter the number of strings.
   - Enter the strings one by one.

4. **Output**:
   - The program will output the longest common prefix of the entered strings.

### Example

**Execution:**
```
Enter number of strings: 3
Enter the strings:
flower
flow
flight
```

**Output:**
```
Longest common prefix: fl
```

This solution ensures that the program efficiently finds the longest common prefix by leveraging character-by-character comparison, stopping as soon as a mismatch is detected.
