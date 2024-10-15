class Solution {
public:
    long long minimumSteps(string s) {
         int n = s.length();
    int whiteCount = 0;  
    long long swaps = 0;       
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '0') {
            whiteCount++;
        } else {
            swaps += whiteCount;
        }
    }

    return swaps;
    }
};