class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        bool started = false; 

        for (int x = 0; x < num.size(); x++) {
            int val = num[x] - '0'; 

            if (change[val] > val) {
                num[x] = '0' + change[val];
                started = true; 
            }
            else if (change[val] < val && started) {
                break; 
            }
        }
        return num; 
    }
};
