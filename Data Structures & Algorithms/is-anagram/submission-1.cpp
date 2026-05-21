class Solution {
public:

    bool isAnagram(string s, string t) {

        // Step 1: Check sizes
        if(s.size() != t.size()){
            return false;
        }

        // Step 2: Create hashmap
        unordered_map<char,int> freq;

        // Step 3: Count frequency from s
        for(char ch : s){
            freq[ch]++;
        }

        // Step 4: Remove frequency using t
        for(char ch : t){
            freq[ch]--;
        }

        // Step 5: Check if all frequencies are 0
        for(auto it : freq){

            if(it.second != 0){
                return false;
            }
        }

        // Step 6: Valid anagram
        return true;
    }
};