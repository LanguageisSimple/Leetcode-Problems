#include<iostream>
using namespace std;

int main()
{
    // Prompt the user to enter a Roman numeral
    string n;
    cout << "Enter a Roman numeral: ";
    cin >> n; // Read the user input

    // Determine the length of the string
    int size = n.length();
    int i = 0, sum = 0; // Initialize index and sum

    // Process each character in the string
    while(size != 0)
    {
        if (n[i] == 'I')
        {
            // Check for IV (4) and IX (9) cases
            if (n[i + 1] == 'V')
            {
                sum += 4;
                size -= 2;
                i += 2;
                continue; // Move to the next iteration of the loop
            }
            else if (n[i + 1] == 'X')
            {
                sum += 9;
                size -= 2;
                i += 2;
                continue; // Move to the next iteration of the loop
            }
            else
            {
                sum += 1;
            }
        }
        else if (n[i] == 'V')
        {
            sum += 5;
        }
        else if (n[i] == 'X')
        {
            // Check for XL (40) and XC (90) cases
            if (n[i + 1] == 'L')
            {
                sum += 40;
                size -= 2;
                i += 2;
                continue; // Move to the next iteration of the loop
            }
            else if (n[i + 1] == 'C')
            {
                sum += 90;
                size -= 2;
                i += 2;
                continue; // Move to the next iteration of the loop
            }
            else
            {
                sum += 10;
            }
        }
        else if (n[i] == 'L')
        {
            sum += 50;
        }
        else if (n[i] == 'C')
        {
            // Check for CD (400) and CM (900) cases
            if (n[i + 1] == 'D')
            {
                sum += 400;
                size -= 2;
                i += 2;
                continue; // Move to the next iteration of the loop
            }
            else if (n[i + 1] == 'M')
            {
                sum += 900;
                size -= 2;
                i += 2;
                continue; // Move to the next iteration of the loop
            }
            else
            {
                sum += 100;
            }
        }
        else if (n[i] == 'D')
        {
            sum += 500;
        }
        else if (n[i] == 'M')
        {
            sum += 1000;
        }
        i++; // Move to the next character
        size--; // Decrease the size
    }

    // Output the calculated sum
    cout << sum << endl;

    return 0;
}