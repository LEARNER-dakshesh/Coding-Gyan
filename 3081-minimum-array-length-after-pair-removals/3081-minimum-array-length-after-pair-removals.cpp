class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
   
   unordered_map<int, int> m; 
        int n = nums.size(); 
         
        for (int i = 0; i < n; i++) { 
            m[nums[i]]++; 
        } 
         
        int maxi = 0; 
        for (auto it : m) { 
            maxi = max(maxi, it.second); 
        } 
         
        if (maxi > n / 2) { 
            return 2 * maxi - n; 
        } 
         
        if (n % 2 == 0) { 
            return 0; 
        } 
        else { 
            return 1; 
        }  
        return 1;       
    }
};