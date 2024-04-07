class Solution {
public:
 int distance(char a, char b) {
    return min(abs(a - b), 26 - abs(a - b));
}


string getSmallestString(string s, int k) {
    string result = s;
    int n = s.length();
    for (int i = 0;i<n;i++) {
        for (char c='a';c<='z';c++) {
            int d = distance(s[i], c);
            if (d <= k) {
                result[i] = c;
                k -= d;
                break;
            }
        }
    }

    return result;
    }
};