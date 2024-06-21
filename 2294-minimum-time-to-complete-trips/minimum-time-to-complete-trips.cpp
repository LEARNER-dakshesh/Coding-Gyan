class Solution {
public:
bool check(vector<int>& time, long long int curr, long long int totalTrips)
{
    long long int tot=0;
    for(int x=0;x<time.size();x++)
    {
        long long int xth=time[x];
        tot+=(curr/xth);
    }
    // if(tot>=totalTrips)
    // {
    //     cout<<curr;
    // }
    return tot>=totalTrips;
}
    long long minimumTime(vector<int>& time, int totalTrips) {

        long long int low=1,high=1e14;
        long long int ans=0;
        while(low<high)
        {
            long long int mid=low+(high-low)/2;
            if(check(time,mid,totalTrips)==true)
            {
                ans=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};