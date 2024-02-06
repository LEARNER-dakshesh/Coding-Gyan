class Solution {
public:
bool check(vector<int>&candies,int div,long long k)
{
    long long cnt=0;
    for(int x=0;x<candies.size();x++)
    {
        cnt+=(candies[x]/div);
       
    }
    return cnt>=k;
}
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        long long ans=0,diff=*max_element(candies.begin(),candies.end()),low=1,high=diff;
        while(low<=high)
        {
            int mid=(low+high)/2;
           if(check(candies,mid,k)==true)
           {
               ans=mid;
               low=mid+1;
           }
           else{
               high=mid-1;
           }
        }
        return ans;
    }
};