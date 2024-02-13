class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        here:
        for(int x=0;x<words.size();x++)
        {
            string s=words[x];
            string k=s;
            reverse(s.begin(),s.end());
            
                if(s==k)
                {
                    return s;
                    break;
                }
            
        }
        return "";
    }
};