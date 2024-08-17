class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini = arrays[0][0];
        int maxa = arrays[0][arrays[0].size()-1];
        int ans = 0;

        for (int i=1;i<arrays.size();i++) {
            
            ans = max(ans,abs(arrays[i][arrays[i].size()-1]-mini));
            ans = max(ans,abs(maxa-arrays[i][0]));

            mini = min(mini,arrays[i][0]);
            maxa = max(maxa,arrays[i][arrays[i].size()-1]);
        }

        return ans;
    }
};
