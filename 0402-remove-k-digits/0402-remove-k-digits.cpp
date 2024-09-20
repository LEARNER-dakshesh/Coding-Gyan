class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<char>st;
        for(int x=0;x<s.size();x++)
        {
             while(!st.empty() && s[x]<st.top() && k>0)
               {
                    st.pop();
                    k--;
               }
            st.push(s[x]);
        }

        while(k>0 && !st.empty())
        {
            st.pop();
            k--;
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int i = 0;
        while (i<res.size() && res[i] == '0') {
            i++;
        }
        res = res.substr(i);

        return res.empty() ? "0" : res;
    }
};