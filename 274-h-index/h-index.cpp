class Solution {
public:
bool check(vector<int>&v,int n)
{
    int c=0;
    for(int x=0;x<v.size();x++)
    {
     if(v[x]>=n)
     {
         c++;
     }
    }
    return c>=n;
}
    int hIndex(vector<int>& cit) {
        // sort(cit.begin(),cit.end());
        int low=0;
        int high=cit.size();
        int tot=0,ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(cit,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return ans;
    }
};