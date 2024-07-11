class Solution {
public:
    string reverseParentheses(string s) {
    stack<char>st;

    string res="";
     for(int x=0;x<s.size();x++)
     {
        if(s[x]==')')
        {
            string w="";
            while(st.top()!='(')
            {
                w+=st.top();
                st.pop();
            }
            st.pop();
            if(x<s.size()-1)
            {
                for(int i=0;i<w.size();i++)
                    {
                      st.push(w[i]);
                    }
                    w="";
            }
            else{
                res=w;
            }
        }
        else{
            st.push(s[x]);
        }
     }
     int f=0;
     while(!st.empty())
     {
        f=1;
        res=st.top()+res;
        st.pop();
     }
    
     return res;
     

    }
};