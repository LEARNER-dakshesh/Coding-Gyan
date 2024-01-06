class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xora= 0;
        for (int n : nums) {
            xora ^= n;
        }
        
        int res = 0;
        k ^= xora;
        while (k > 0) {
            res += k&1;
            k >>= 1;
        }
        
        return res;
    }
};