class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int i=0,j=0,cnt=0;
        int curr_sum=0;

        while(j<arr.size())
        {
            curr_sum+=arr[j];
            if(j-i+1 == k)
            {
                double avg = static_cast<double>(curr_sum) / k;
                if(avg >= threshold)
                {
                    // cout<<i<<" ";
                    cnt++;
                }
                curr_sum-=arr[i];
                i++;
            }
            j++;
        }
        return cnt;
    }
};