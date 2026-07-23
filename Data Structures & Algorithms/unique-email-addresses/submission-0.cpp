class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        unordered_set<string> st;

        for(string email : emails)
        {
            string local = "";
            string domain = "";

            int at = email.find('@');

            // Process local part
            for(int i = 0; i < at; i++)
            {
                if(email[i] == '+')
                    break;

                if(email[i] == '.')
                    continue;

                local += email[i];
            }

            // Copy domain
            for(int i = at; i < email.size(); i++)
            {
                domain += email[i];
            }

            st.insert(local + domain);
        }

        return st.size();
    }
};