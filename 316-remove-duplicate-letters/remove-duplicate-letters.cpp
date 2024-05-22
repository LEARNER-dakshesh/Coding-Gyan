class Solution {
public:
    string removeDuplicateLetters(string s) {
     vector<int>freq(26,0);
     for(int x=0;x<s.size();x++)
     {
        freq[s[x]-'a']++;
     }
    vector<int>used(26,0);
    string st="";
     for(int x=0;x<s.size();x++)
     {
        freq[s[x]-'a']--;
        if(used[s[x]-'a']==1)
        {
            continue;
        }
        while(!st.empty() && st.back()>s[x] && freq[st.back()-'a']!=0)
        {
            used[st.back()-'a']=0;
            st.pop_back();
        }
        used[s[x]-'a']=1;
        st.push_back(s[x]);
     }
      return st;

    }
};