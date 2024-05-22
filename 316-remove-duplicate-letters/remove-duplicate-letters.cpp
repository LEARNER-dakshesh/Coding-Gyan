class Solution {
public:
    string removeDuplicateLetters(string s) {
     vector<int>freq(26,0);
     for(int x=0;x<s.size();x++)
     {
        freq[s[x]-'a']++;
     }
    vector<int>seen(26,0);
    string st="";
     for(int x=0;x<s.size();x++)
     {
        freq[s[x]-'a']--;
        if(seen[s[x]-'a']==1)
        {
            continue;
        }
        while(!st.empty() && st.back()>s[x] && freq[st.back()-'a']!=0)
        {
            seen[st.back()-'a']--;
            st.pop_back();
        }
        seen[s[x]-'a']=1;
        st.push_back(s[x]);
     }
      return st;

    }
};