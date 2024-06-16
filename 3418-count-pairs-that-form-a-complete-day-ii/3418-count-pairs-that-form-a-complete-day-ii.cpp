class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
    unordered_map<long long,long long> mp;
    long long cnt = 0;

    for (int x=0;x<hours.size();x++) {
        long long calc = hours[x] % 24;
        long long rem = abs(24 - calc) % 24;
        if (mp.find(rem) != mp.end()) {
            cnt += mp[rem];
        }
        mp[calc]++;
    }
    return cnt;
    }
};