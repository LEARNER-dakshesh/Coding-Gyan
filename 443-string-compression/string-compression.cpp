class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1) {
            return 1;
        }
        char ch = chars[0];
        int tot = 1;
        string ans = "";
        for (int x = 1; x < chars.size(); x++) {
            if (chars[x] == ch) {
                tot++;
            } else {
                if (tot > 1) {
                    string times = to_string(tot);
                    ans += ch;
                    ans += to_string(tot);
                    // cout << ch << " " << tot << endl;
                } else {
                    ans += ch;
                }
                ch = chars[x];
                tot = 1;
            }
        }
        // cout << ch << " " << tot << endl;
        if (tot > 1) {
            string times = to_string(tot);
            ans += ch;
            ans += to_string(tot);
        } else {
            ans += ch;
        }
        // cout << ans;
       chars.clear();

       for(int x=0;x<ans.size();x++)
       {
       chars.push_back(ans[x]);
       }
       return chars.size();
    }
};