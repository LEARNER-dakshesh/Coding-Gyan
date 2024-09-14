class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int maxa=INT_MIN;
        for(int x=0;x<nums.size();x++)
        {
            maxa=max(maxa,nums[x]);
        }
        cout<<maxa<<endl;
        int maxcnt=1;
        int cnt=1;
        int prev=nums[0];
        for(int x=1;x<nums.size();x++)
        {
            if(nums[x]==maxa && prev==maxa)
            {
                prev=nums[x];
                cnt++;                
                maxcnt=max(maxcnt,cnt);
            }
            else if(nums[x]!=maxa)
            {
                cnt=1;
                prev=nums[x];
            }
            else if(nums[x]==maxa && prev!=maxa)
            {
                prev=nums[x];
            }
        }
        return maxcnt;
    }
};