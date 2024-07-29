class Solution {
public:
    int numTeams(vector<int>& rating) {
    int ans = 0;
    int cnt=0;
    int n = rating.size();
    
    for(int x=0;x<n-2;x++)
    {
        for(int y=x+1;y<n-1;y++)
         {
            if(rating[x]<rating[y]) {
                for(int z=y+1;z<n;z++) 
                {
                    if(rating[y]<rating[z])
                     {
                        ans++;
                    }
                }
            }
        }
    }

    for(int x=0;x<n-2;x++) 
    {
        for(int y=x+1;y<n-1;y++)
         {
            if(rating[x]>rating[y])
             {
                for(int z =y+1;z<n;z++) 
                {
                    if(rating[y]>rating[z]) {
                        ans++;
                    }
                }
            }
        }
    }

    return ans;
}

};