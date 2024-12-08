class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        int cnt=0;
        int n=s.size();
        int longest=0;
        for(int x=0;x<s.size();x++)
        {
            if(s[x]=='(')
            {
                st.push(x);
            }
            else 
            {
                if(!st.empty())
                {
                    if(s[st.top()]=='(' )
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(x);
                    }
                }
                else
                {
                    st.push(x);
                }
            }
        }
        if(st.empty())
        {
            longest=n;
        }
        else
        {
            int a=n,b=0;
            while(!st.empty())
            {
                b=st.top();
                st.pop();
                longest=max(longest,a-b-1);
                a=b;
            }
            longest=max(longest,a);
        }
        return longest;
    }
};