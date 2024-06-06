#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

class Two_Sum
{
    public:
        // Process_Data function takes a vector of integers and a target integer as input
        // It returns a vector of integers containing the indices of two numbers in the input vector that add up to the target
        vector<int> Process_Data(vector<int>& nums, int target)
        {
            vector<int> result; // vector to store the result
            for(int i = 0; i < nums.size(); i++)
            {
                // iterate through the vector to find the first number
                for(int j = i + 1; j < nums.size(); j++)
                {
                    // check if the sum of the current two numbers equals the target
                    if(nums[i] + nums[j] == target)
                    {
                        // if the sum equals the target, add the indices to the result vector
                        result.push_back(i);
                        result.push_back(j);
                        return result; // return the result vector
                    }
                }
            }
            return result; // return an empty vector if no pair is found
        }
};

int main()
{
    Two_Sum object; // create an instance of the Two_Sum class

    // prompt the user to enter a list of integers separated by spaces
    cout << "Enter a list of integers separated by spaces: ";
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> nums;
    int number;
    while (ss >> number)
    {
        nums.push_back(number);
    }

    // prompt the user to enter the target value
    cout << "Enter the target value: ";
    int target;
    cin >> target;

    vector<int> result = object.Process_Data(nums, target); // call the Process_Data function

    if(!result.empty())
    {
        // print the indices of the two numbers that add up to the target
        cout << "Indices of two numbers that add up to " << target << " are " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        // print a message if no pair is found
        cout << "No two numbers in the vector add up to " << target << endl;
    }

    return 0;
}
