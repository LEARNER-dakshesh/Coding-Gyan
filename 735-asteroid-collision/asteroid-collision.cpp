class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        for(int x=0;x<ast.size();x++)
        {
          if(ast[x]>0|| st.empty())
          {
            st.push(ast[x]);
          }
          else{
             while(!st.empty() && st.top()>0 && st.top()<abs(ast[x]))
             {
                st.pop();
             }
             if(!st.empty() && st.top()==abs(ast[x]))
             {
                st.pop();
             }
             else{
                if(st.empty() || st.top()<0)
                {
                    st.push(ast[x]);
                }
             }
          }

        }
        vector<int>v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};