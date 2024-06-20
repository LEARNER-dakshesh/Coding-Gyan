class Solution {
public:
bool check(vector<int>quantities,int mid,int n)
{
    int cnt=0;
    for(int x=0;x<quantities.size();x++)
    {
        if(quantities[x]%mid==0)
        {
            cnt+=quantities[x]/mid;
        }
        else{
            cnt+=quantities[x]/mid;
            cnt++;
        }
    }
    if(cnt>n)
    {
        return false;
    }
    return true;
}
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
     int ans=INT_MAX;
        while(low<=high)
        { 
            int mid=(low+high)/2;
            if(check(quantities,mid,n)==true)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};