class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
      int cnt=0;
      for(int x=0;x<s.size();x++)
      {
        int flag=0;
        for(int y=0;y<s.size()-1;y++)
        {
            if(s[y]=='0' && s[y+1]=='1')
            {
               swap(s[y],s[y+1]);
                flag=1;
                y++;
            }
        }
        if(flag==1)
        {
            cnt+=1;
        }
      }
      return cnt;
    }
};