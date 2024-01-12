class Solution {
public:
    bool check(int mid,vector<int>&position,int m)
    {
        int c=1;
        int pos=position[0];
        for(int x=0;x<position.size();x++)
        {
            if((position[x]-pos)>=mid)
            {
                pos=position[x];
                c++;
            }
            if(c==m)
            {
                return true;
            }
        } 
        if(c>=m)
            {
                return true;
            }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int low=0;
        int high=*max_element(position.begin(),position.end());
        sort(position.begin(),position.end());
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(mid,position,m)==true)
            {
                ans=max(ans,mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};