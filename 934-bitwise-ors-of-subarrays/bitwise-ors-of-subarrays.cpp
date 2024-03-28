class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
          unordered_set<int> result, cur;
        unordered_set<int> prev;
        
        for (int num : arr) {
            cur = {num}; 
            for (int prev_num : prev) {
                cur.insert(num | prev_num);  
                 }
            prev = cur;  
            result.insert(cur.begin(), cur.end());  
                }
        
        return result.size();
    }
};