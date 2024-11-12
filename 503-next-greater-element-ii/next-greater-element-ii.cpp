class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();

        vector<int> res(n,-1);
        stack<int> st;

        for (int x =2 * n - 1; x >= 0;x--) {
            if (st.empty()) {
                res[x%n] = -1;
                st.push(nums[x%n]);
            } else {
                while (!st.empty() && st.top() <= nums[x%n]) {
                    st.pop();
                }
                if (!st.empty()) {
                    res[x%n] = st.top();
                } else {
                    res[x%n] = -1;
                }
                st.push(nums[x%n]);
            }
        }
       
        return res;
    }
};