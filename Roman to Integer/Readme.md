# Roman to Integer

## Instructions and Explanation of the Problem

### Problem Statement

Given a Roman numeral, convert it to an integer. Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D`, and `M`.

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. 

There are six instances where subtraction is used:
- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

### Example

**Input:**
```
"LVIII"
```

**Output:**
```
58
```

**Explanation:**
```
L = 50, V = 5, III = 3, so LVIII = 50 + 5 + 3 = 58.
```

## Solution Explanation

The solution involves iterating through the string representation of the Roman numeral and summing the values of each symbol. When a symbol that represents a smaller value is followed by a symbol that represents a larger value, we subtract the smaller value.

### Detailed Steps:

1. Initialize variables to keep track of the current index (`i`) and the running sum (`sum`).
2. Iterate through the string until all characters are processed.
3. For each character, check for specific patterns that indicate subtraction:
    - `IV` (4) and `IX` (9)
    - `XL` (40) and `XC` (90)
    - `CD` (400) and `CM` (900)
4. If a pattern is found, add the corresponding value to the sum and skip the next character.
5. If no pattern is found, add the value of the current character to the sum.
6. Continue this process until all characters are processed.
7. Output the resulting sum.

### Code Explanation

The code has been explained line by line using comments in the `Roman_to_Integer.cpp` file.

## How to Use

1. Clone the repository:
    ```bash
    git clone https://github.com/LanguageIsSimple/LeetCode-Problems.git
    cd LeetCode-Problems/Roman\ to\ Integer
    ```
2. Compile the code:
    ```bash
    g++ Roman_to_Integer.cpp -o Roman_to_Integer
    ```
3. Run the executable:
    ```bash
    ./Roman_to_Integer
    ```
4. Enter a Roman numeral when prompted to see the integer conversion.

This solution effectively handles the conversion by considering the specific subtraction cases defined in Roman numeral rules.
