class Solution {
public:

    vector<vector<int>> ans;
    vector<int> current;

    void printSubset(vector<int>& nums, int i)
    {
        if(i == nums.size())
        {
            ans.push_back(current);
            return;
        }

        current.push_back(nums[i]);

        printSubset(nums, i + 1);

        current.pop_back();

        printSubset(nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums)
    {
        printSubset(nums, 0);
        return ans;
    }
};