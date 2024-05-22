class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
    vector<bool> toggle(n,false);
    
    for (int i=1;i<n;i++) {
        if(nums[i]%2!=nums[i-1]%2)
        {
            toggle[i]=true;
        }
    }
    
    vector<int>prefix_sum(n, 0);
    for (int i = 1;i<n;i++) {
        if(toggle[i]==true)
        {
            prefix_sum[i]=prefix_sum[i-1]+1;
        }
        else{
            prefix_sum[i]=prefix_sum[i-1]+0;
        }
    }
    
    vector<bool> result;
    for (auto& query : queries) {
        int x = query[0];
        int y = query[1];
        if (x == y) {
            result.push_back(true);
        } 
        else
         {
            int sum1 = prefix_sum[y] - prefix_sum[x];
            if (sum1 == (y-x)) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
    }
    
    return result;

    }
};