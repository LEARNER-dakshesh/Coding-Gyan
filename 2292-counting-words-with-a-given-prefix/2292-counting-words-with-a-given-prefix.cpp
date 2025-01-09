class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int ans=0;
        int target_len=pref.size();

        for(int x=0;x<words.size();x++)
        {
            if(words[x].length()>=target_len)
            {
                string w=words[x].substr(0,target_len);
                if(w==pref)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};