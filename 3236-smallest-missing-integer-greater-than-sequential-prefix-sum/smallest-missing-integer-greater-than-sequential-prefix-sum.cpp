class Solution {
public:
    int missingInteger(vector<int>& nums) {
    int ps = nums[0]; 
        for (int i = 1; i < nums.size(); i++) { 
            if (nums[i] == nums[i - 1] + 1) { 
                ps += nums[i]; 
            } else { 
                break; 
            } 
        } 
 
        int n = ps; 
        int f=0;
        while (f!=1) { 
            auto it=find(nums.begin(),nums.end(),n);
                if(it==nums.end())
                {
                    f=1;
                }
            else{
            n++; 
            }
        } 
        return n; 
}
};