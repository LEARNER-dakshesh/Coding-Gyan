class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int>v;
        v.push_back(nums[0]);
        int cnt=1;
        int prev=nums[0];

        for(int x=1;x<nums.size();x++)
        {
            if(nums[x]==prev && cnt<2)
            {
                cnt++;
                v.push_back(nums[x]);
            }
            else if(nums[x]==prev && cnt==2)
            {
                continue;
            }
            else if(nums[x]!=prev)
            {
                cnt=1;
                prev=nums[x];
                v.push_back(nums[x]);
            }
        }
        int size=v.size();
        nums.clear();
        nums=v;
        
        
        return size;



    }
};