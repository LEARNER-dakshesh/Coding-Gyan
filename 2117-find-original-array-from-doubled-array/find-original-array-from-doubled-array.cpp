class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if (n % 2 != 0) return {};  
        
        unordered_map<int, int> freq;
        for (int x : changed) {
            freq[x]++;
        }
        
        sort(changed.begin(), changed.end());
        vector<int> original;
        
        for (int x : changed) {
            if (freq[x] == 0) continue; 
            if (freq[2 * x] == 0) return {};  
            
            original.push_back(x);
            
            freq[x]--;
            freq[2 * x]--;
        }
        
        return original.size()==n/2 ? original:vector<int>();  
    }
};
