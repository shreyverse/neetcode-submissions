class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded = "";

        for (int i = 0; i < strs.size(); i++) {

            string word = strs[i];

            // add length
            encoded += to_string(word.length());

            // add separator
            encoded += '#';

            // add actual string
            encoded += word;
        }

        return encoded;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while (i < s.length()) {

            string lenStr = "";

            // read length
            while (s[i] != '#') {

                lenStr += s[i];
                i++;
            }

            int len = stoi(lenStr);

            // skip '#'
            i++;

            string word = "";

            // take next len characters
            for (int j = 0; j < len; j++) {

                word += s[i];
                i++;
            }

            ans.push_back(word);
        }

        return ans;
    }
};