#include <iostream>  // Include the iostream library for input and output
#include <string>    // Include the string library for string manipulations
#include <algorithm> // Include the algorithm library for the reverse function

using namespace std; // Use the standard namespace

int main()
{
    int num; // Declare an integer variable to store the user's input
    cout << "Enter a number: "; // Prompt the user to enter a number
    cin >> num; // Read the user's input and store it in the variable 'num'

    // Check if the entered number is negative
    if (num < 0)
    {
        cout << "NO" << endl; // Print "NO" if the number is negative
    }
    else
    {
        // Convert the number to a string
        string str_num = to_string(num);
        // Create a copy of the string to reverse
        string rev_str_num = str_num;
        // Reverse the string
        reverse(rev_str_num.begin(), rev_str_num.end());

        // Check if the original string and the reversed string are the same
        if (str_num == rev_str_num)
        {
            cout << "YES" << endl; // Print "YES" if the number is a palindrome
        }
        else
        {
            cout << "NO" << endl; // Print "NO" if the number is not a palindrome
        }
    }

    return 0; // Return 0 to indicate successful execution
}
