class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        map<int,int>mp;
        for(int x=0;x<nums.size();x++){
           mp[nums[x]]=x;
        }
        vector<int>res;

        for(int x=0;x<operations.size();x++)
        {
            int pos=mp[operations[x][0]];
            mp.erase(nums[pos]);
            nums[pos]=operations[x][1];
            mp[operations[x][1]]=pos;
        }
        return nums;

    }
};