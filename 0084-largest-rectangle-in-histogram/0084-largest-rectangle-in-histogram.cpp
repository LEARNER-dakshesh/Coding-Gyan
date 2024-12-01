class Solution {
public:
    void findNextSmaller(vector<int>& height, vector<int>& nxt) {
        int n = height.size();
        stack<int> st;

        for (int x = 0; x < n; x++) {
            while (!st.empty() && height[x] < height[st.top()]) {
                nxt[st.top()] = x;
                st.pop();
            }
            st.push(x);
        }
    }

    void findPrevSmaller(vector<int>& height, vector<int>& prv) {
        int n = height.size();
        stack<int> st;

        for (int x = 0; x < n; x++) {
            while (!st.empty() && height[st.top()] >= height[x]) {
                st.pop();
            }
            prv[x] = st.empty() ? -1 : st.top();
            st.push(x);
        }
    }

    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        vector<int> prv(n, -1); 
        vector<int> nxt(n, n); 

        findNextSmaller(height, nxt);
        findPrevSmaller(height, prv);

        int res = 0;
        for (int x = 0; x < n; x++) {
            int width = nxt[x] - prv[x] - 1;
            int area = height[x] * width;
            res = max(res, area);
        }
        return res;
    }
};
