class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
        int unmatch=0;
        for(int x=0;x<s.size();x++)
        {
            if(s[x]=='[')
            {
                st.push('[');
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    unmatch++;
                }
            }
        }
        return (unmatch+1)/2;
    }
};