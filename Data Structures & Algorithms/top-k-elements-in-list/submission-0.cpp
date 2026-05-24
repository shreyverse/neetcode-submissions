class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }

        // Step 2: Store into vector of pairs
        vector<pair<int,int>> vec;

        for(auto it : freq){

            vec.push_back({it.first, it.second});
        }

        // Step 3: Sort by frequency descending
        sort(vec.begin(), vec.end(),

            [](pair<int,int> a, pair<int,int> b){

                return a.second > b.second;
            }
        );

        // Step 4: Store top k elements
        vector<int> ans;

        for(int i = 0; i < k; i++){

            ans.push_back(vec[i].first);
        }

        return ans;    
        
    }
};
