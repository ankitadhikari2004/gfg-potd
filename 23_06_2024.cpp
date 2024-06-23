class Solution
{
public:
    vector<int> bracketNumbers(string str)
    {
        vector<int> ans;
        stack<pair<char, int>> st;
        int count = 1;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                st.push({'(', count});
                ans.push_back(count);
                count++;
            }
            if (str[i] == ')')
            {
                ans.push_back(st.top().second);
                st.pop();
            }
        }
        return ans;
    }
};