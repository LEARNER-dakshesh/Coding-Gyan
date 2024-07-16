class Solution {
public:
    int maxProduct(vector<string>& words) {
         int n = words.size();
    vector<int> charSets(n, 0);
    int maxa = 0;

    for (int i = 0; i < n; i++) {
        for (char ch : words[i]) {
            charSets[i] |= 1 << (ch - 'a');
        }

        for (int j = 0; j < i; ++j) {
            if ((charSets[i] & charSets[j]) == 0) {  
                int pro = words[i].size() * words[j].size();
                maxa = max(maxa, pro);
            }
        }
    }

    return maxa;
    }
};