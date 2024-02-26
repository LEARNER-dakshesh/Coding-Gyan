class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int c=1;
        for(int x=0;x<s.size();x++)
        {
            if(st.count(s[x])>0)
            {    
               c+=1;
               st.clear();
               st.insert(s[x]); 
            }
            else{
                st.insert(s[x]);
            }
        }
        return c;
    }
};