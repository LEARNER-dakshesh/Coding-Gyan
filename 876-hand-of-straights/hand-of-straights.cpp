class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
       
      map<int, int> mp;
        for (int x : hand) {
            mp[x]++;
        }
        int size = 0;
        int count = 0;
        
        while (!mp.empty()) {
            int curr = mp.begin()->first;
            
            while (size < groupsize) {
                if (mp.find(curr) == mp.end()) {
                    return false;
                }
                
                mp[curr]--;
                if (mp[curr] == 0) {
                    mp.erase(curr);
                }
                size++;
                curr++;
            }
            
            count++;
            size = 0;
        }
        
        int n = hand.size();
        return count == n / groupsize;

    }
};