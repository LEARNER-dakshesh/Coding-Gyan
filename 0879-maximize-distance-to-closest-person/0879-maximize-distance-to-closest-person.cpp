class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int>v;
        for(int x=0;x<seats.size();x++)
        {
            if(seats[x]==1)
            {
                v.push_back(x);
            }
        }

        if(v.size()==1)
        {
            int n=seats.size()-1;
            return max((v[0]-0),(n-v[0]));
        }
        int n=seats.size()-1;
        int ans=max(v[0]-0,n-v[v.size()-1]);
        for(int x=0;x<v.size()-1;x++)
        {
            ans=max(ans,(v[x+1]-v[x])/2);
        }
        return ans;


    }
};