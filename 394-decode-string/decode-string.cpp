class Solution {
public:
    string decodeString(string s) {
    stack<char> st;
        for (int x = 0; x < s.size(); x++) {
            if (s[x] != ']') {
                st.push(s[x]);
            } else {
                string temp = "";
                while (!st.empty() && st.top() != '[') {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop(); 
                
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }
                
                int repeat = stoi(num);
                string repeatedStr = "";
                for (int i = 0; i < repeat; i++) {
                    repeatedStr += temp;
                }
                
                for (char c : repeatedStr) {
                    st.push(c);
                }
            }
        }
        
        string final = "";
        while (!st.empty()) {
            final = st.top() + final;
            st.pop();
        }
        
        return final;
    }
};