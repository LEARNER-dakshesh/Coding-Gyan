class Solution {
public:
typedef long long ll;
    long long largestSquareArea(vector<vector<int>>& Bl, vector<vector<int>>& Tr) {
    
       int res=0;
        for(int x=0;x<Bl.size();x++)
        {
            for(int y=x+1;y<Bl.size();y++)
            {
                int prsntx=max(0,min(Tr[x][0],Tr[y][0]) - max(Bl[x][0],Bl[y][0]));
                int prsnty=max(0,min(Tr[x][1],Tr[y][1]) - max(Bl[x][1],Bl[y][1]));
                int sid=min(prsntx,prsnty);
                res=max(res,sid);
            }
        }
        return (long long)res*res;
     
    }
};