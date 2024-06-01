class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int x=0;x<s.size()-1;x++)
        {
            int ch1=s[x];
            int ch2=s[x+1];
            
            sum+=abs(ch2-ch1);
        }
        return sum;
    }
};