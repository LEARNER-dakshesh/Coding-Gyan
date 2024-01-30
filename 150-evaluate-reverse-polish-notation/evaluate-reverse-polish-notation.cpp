class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<long> st;
        unordered_set<string> op = {"+", "-", "*", "/"};
        long op1, op2;

        for (auto str: t){
            if(op.find(str) == op.end()) 
                st.push(stoi(str));
            else{ 
                 op2 = st.top(), st.pop();
                 op1 = st.top(), st.pop();

                if (str == "+")  op2 = op1+op2;
                else if(str == "-") op2 = op1-op2;
                else if(str == "*") op2 = op1*op2;
                else if(str == "/") op2 = op1/op2;
                st.push(op2);
            }
        }

        return st.top();    
    }
};