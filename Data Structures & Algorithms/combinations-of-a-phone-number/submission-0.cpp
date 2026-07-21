class Solution {
public:
    vector<string> ans;

    // Phone keypad mapping
    vector<string> keypad = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };

    void solve(string &digits, int index, string &current) {
        // Base Case
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        // Get letters corresponding to current digit
        string letters = keypad[digits[index] - '0'];

        // Try every possible letter
        for (char ch : letters) {
            current.push_back(ch);          // Choose
            solve(digits, index + 1, current); // Explore
            current.pop_back();             // Backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        string current = "";

        solve(digits, 0, current);

        return ans;
    }
};