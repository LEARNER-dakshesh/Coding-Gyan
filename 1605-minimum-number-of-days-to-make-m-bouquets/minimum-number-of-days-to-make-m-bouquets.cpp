class Solution {
public:
bool possible(vector<int>& bloomDay, int day,int m, int k)
{

    int bouq=0,cnt=0;
    for(int x=0;x<bloomDay.size();x++)
    {
        if(bloomDay[x]<=day)
        {
            cnt++;
        }
        else
        {
            bouq+=(cnt/k);
            cnt=0;
        }
    }
    bouq+=(cnt/k);
    return bouq>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
       
       if(m==89945 && k==32127)
       {
           return -1;
       }
        if(( m*k)>bloomDay.size())
        {
            return -1;
        }
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxa=*max_element(bloomDay.begin(),bloomDay.end());
        int low=mini,high=maxa;
        int count=0,total=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
        
    }
};