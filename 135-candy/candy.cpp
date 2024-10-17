class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();

        vector<int>v(n,1);

        for(int x=1;x<ratings.size();x++)
        {
           if(ratings[x]>ratings[x-1])
           {
            v[x]=v[x-1]+1;
           }
        } 

        for(int x=n-1;x>0;x--)
        {
            if(ratings[x-1]>ratings[x])
            {
                v[x-1]=max(v[x]+1,v[x-1]);
            }
        }

        return accumulate(v.begin(),v.end(),0LL);   
    }
};