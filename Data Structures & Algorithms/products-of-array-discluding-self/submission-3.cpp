class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Step 1: Store the size of the array
        int n = nums.size();

        // Step 2: Create the answer vector of size n
        // Initialize every element with 1
        vector<int> ans(n, 1);

        // Step 3: Variable to store left(prefix) product
        int prefix = 1;

        // Step 4: Traverse from left to right
        for (int i = 0; i < n; i++) {

            // Store the left product in answer array
            ans[i] = prefix;

            // Update prefix by multiplying current element
            prefix *= nums[i];
        }

        // Step 5: Variable to store right(postfix) product
        int postfix = 1;

        // Step 6: Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {

            // Multiply left product with right product
            ans[i] *= postfix;

            // Update postfix for next iteration
            postfix *= nums[i];
        }

        // Step 7: Return the final answer
        return ans;
    }
};