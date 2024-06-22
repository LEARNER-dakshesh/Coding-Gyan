class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0, ans = 0, i = 0, oddCount = 0;
        
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] % 2 != 0) {
                oddCount++;
            }
            
            while (oddCount > k) {
                if (nums[i] % 2 != 0) {
                    oddCount--;
                }
                i++;
            }
            
            if (oddCount == k) {
                int tempLeft = i;
                while (oddCount == k) {
                    if (nums[tempLeft] % 2 != 0) {
                        oddCount--;
                    }
                    tempLeft++;
                }
                ans += tempLeft - i;
                oddCount = k; 
            }
        }
        
        return ans;
    }
};
