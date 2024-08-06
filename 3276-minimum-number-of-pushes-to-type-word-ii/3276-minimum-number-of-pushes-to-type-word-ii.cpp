class Solution {
public:
    int minimumPushes(string word) {
         int n = word.size();
        unordered_map<char,int>mp;
        for (char j : word) {
            mp[j]++;
        }

        vector<pair<int, char>> a;
        for (auto x : mp) {
            a.push_back(make_pair(x.second, x.first));
        }
        sort(a.rbegin(), a.rend());
        int res = 0;
        int keys = 0;
        for (auto j : a) {
            keys++;
            if (keys < 9) {
                res += j.first;
            } else if (keys < 17) {
                res += j.first * 2;
            } else if (keys < 25) {
                res += j.first * 3;
            } else {
                res += j.first * 4;
            }
        }

    return res;
    }
};