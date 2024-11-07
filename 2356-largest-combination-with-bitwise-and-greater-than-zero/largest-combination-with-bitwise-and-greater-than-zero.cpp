class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans=0;
        for(int x=0;x<32;x++)
        {
            int cnt=0;
            for(int y=0;y<candidates.size();y++)
            {
                if((1<<x)&candidates[y])
                {
                    cnt++;
                }
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};