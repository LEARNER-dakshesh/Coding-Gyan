class Solution {
public:
const int MOD = 1e9 + 7;
    int valueAfterKSeconds(int n, int k) {

    vector<int>v(n, 1); 
    for (int x=0; x<k;x++) {
        vector<int> new_v(n,0);
        new_v[0] = v[0];
        for (int i=1;i<n;i++) {
            new_v[i] = (new_v[i-1]+v[i])%MOD;
        }
        v= new_v; 
    }
    
    return v[n - 1];
    }
};