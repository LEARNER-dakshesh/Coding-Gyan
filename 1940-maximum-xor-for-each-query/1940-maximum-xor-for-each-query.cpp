class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>xorprefix;
        int xora=0;
        for(int x=0;x<nums.size();x++)
        {
           xora=xora^nums[x];
           xorprefix.push_back(xora);
        }

        for(int x=0;x<xorprefix.size();x++)
        {
            cout<<xorprefix[x]<<endl;
        }
        int target=pow(2,maximumBit)-1;
        cout<<target<<endl;
        vector<int>ans;
        for(int x=0;x<xorprefix.size();x++)
        {
            int calc=(xorprefix[x]^target);
            cout<<calc<<" ";
            ans.push_back(calc);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};