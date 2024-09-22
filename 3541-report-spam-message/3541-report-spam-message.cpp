class Solution {
public:
    bool reportSpam(vector<string>& msg, vector<string>& bn) {
        set<string>st;
        for(int x=0;x<bn.size();x++)
        {
            st.insert(bn[x]);
        }
        int cnt=0;
        for(int x=0;x<msg.size();x++)
        {
            if(st.count(msg[x])>0)
            {
                cnt++;
            }
        }
        return cnt>=2;

    }
};