class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

      
        int cnt=1;
        int prev=nums[0];
        int i=1;
        int nsize=1;

        for(int x=1;x<nums.size();x++)
        {
            if(prev==nums[x] && cnt<2)
            {
                cnt++;
                nums[i]=nums[x];
                i++;
                nsize++;
            }
            else if(prev==nums[x] && cnt>=2)
            {
                continue;
            }
            else if(prev!=nums[x])
            {
                nums[i]=nums[x];
                prev=nums[x];
                i++;
                cnt=1;
                nsize++;

            }
        }
        
        return nsize;
    }
};