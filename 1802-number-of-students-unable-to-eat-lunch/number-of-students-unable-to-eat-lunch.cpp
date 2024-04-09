class Solution {
public:
 bool check(int val,queue<int>& q1) {
    
       queue<int>q=q1;
        while (!q.empty()) {
            if (q.front() == val) {
                cout<<val<<" "<<q.front()<<endl;
                return true;
            }
            q.pop();
        }
        return false; 
    }
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(int x=0;x<students.size();x++)
        {
            q.push(students[x]);
        }
        stack<int>st;
        for(int x=sandwiches.size()-1;x>=0;x--)
        {
            st.push(sandwiches[x]);
        }

       
        while(!q.empty())
        {
            if(check(st.top(),q)==true){
            if(st.top()==q.front())
            {
                st.pop();
                q.pop();
            }
            else{
                int del=q.front();
                q.pop();
                q.push(del);
            }
        }
        else{
            return q.size();
        }
        }
        return q.size();

    }
};