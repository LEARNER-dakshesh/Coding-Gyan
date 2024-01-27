class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<3)
        {
            return false;
        }
        int nA=0,nB=0;
        int cnt1=0,cnt2=0;
        for(int x=0;x<colors.size();x++)
        {
            if(colors[x]=='A' )
            {
                cnt1++;
               if(cnt1>=3 && colors[x+1]!=colors[x])
               {
                   nA+=cnt1-2;
                   cnt1=0;
               }
               else if(cnt1<3 && colors[x+1]!=colors[x] )
               {
                   cnt1=0;
               }
            }
            if(colors[x]=='B' )
            {
                cnt2++;
                if(cnt2>=3 && colors[x+1]!=colors[x])
                {
                    nB+=cnt2-2;
                    cnt2=0;
                }
                else if(cnt2<3 && colors[x+1]!=colors[x])
                {
                    cnt2=0;
                }
            }
        }
        cout<<nA<<" "<<nB;
        return nA>nB;
       }
};