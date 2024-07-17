class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        
        for(int x = 0; x < s.size(); x++) {
           map<char, int> mp;
            for(int y = x; y < s.size(); y++) {
                 mp[s[y]]++;
                
                int largest = 0, smallest = INT_MAX;
                for(auto it : mp) {
                    largest = max(largest, it.second);
                    smallest = min(smallest, it.second);
                }
                 sum += largest-smallest;
            }
        }
        
        return sum;
    }
};
