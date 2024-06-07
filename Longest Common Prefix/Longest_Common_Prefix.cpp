#include<iostream>
#include<string>
#include<vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string common = ""; // Initialize the common prefix string
        if (strs.empty()) return common; // If the input vector is empty, return empty string

        std::string word_1 = strs[0]; // Take the first word as a reference
        for (int z = 0; z < word_1.size(); z++) {
            char character = word_1[z]; // Get each character of the first word
            for (int i = 1; i < strs.size(); i++) {
                const std::string& word = strs[i]; // Reference to the current word
                // If character mismatch or current word is shorter, return common prefix found so far
                if (z >= word.size() || word[z] != character) {
                    return common;
                }
            }
            common += character; // Add character to common prefix
        }
        return common; // Return the longest common prefix
    }
};

int main() {
    int n; // Number of strings
    std::cout << "Enter number of strings: ";
    std::cin >> n;

    std::vector<std::string> strs(n); // Vector to hold the strings
    std::cout << "Enter the strings:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> strs[i]; // Read each string from the user
    }

    Solution solution; // Create an object of the Solution class
    std::string result = solution.longestCommonPrefix(strs); // Find the longest common prefix
    std::cout << "Longest common prefix: " << result << std::endl; // Output the result

    return 0;
}