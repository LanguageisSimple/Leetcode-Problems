#include<iostream>
#include<vector>
using namespace std;

class Two_Sum
{
    public:
        vector<int> Process_Data(vector<int>& nums, int target)
        {
            vector<int> result;
            for(int i = 0; i < nums.size(); i++)
            {
                for(int j = i + 1; j < nums.size(); j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
            return result;
        }
};

int main()
{
    Two_Sum object;

    vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 9;

    vector<int> result = object.Process_Data(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the numbers that add up to " << target << " are: ";
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
