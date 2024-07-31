class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int low=1,high=m*n;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(check(m,n,mid)<k)
            {
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
    int check(int m,int n , int mid)
    {
        int cnt=0;
        for(int x=1;x<=m;x++)
        {
            cnt+=min(mid/x,n);
        }
        return cnt;
    }
};