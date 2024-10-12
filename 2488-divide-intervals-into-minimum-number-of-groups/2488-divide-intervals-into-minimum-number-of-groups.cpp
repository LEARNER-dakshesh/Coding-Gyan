class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        multiset<int>st;
        for(int x=0;x<intervals.size();x++)
        {
            int start=intervals[x][0],end=intervals[x][1];
            auto it=st.lower_bound(start);
            if(it!=st.begin())
            {
                st.erase(--it);
            }
            st.insert(end);
        }
        return st.size();
    }
};