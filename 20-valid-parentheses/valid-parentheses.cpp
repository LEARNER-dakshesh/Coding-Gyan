class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int x = 0; x < s.length(); x++) {
            if (s[x] == '(' || s[x] == '{' || s[x] == '[') {
                st.push(s[x]);
            } else {
                if (st.empty()) {
                    return false;
                }
                if ((s[x] == ')' && st.top() == '(') ||
                    (s[x] == '}' && st.top() == '{') ||
                    (s[x] == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
