class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>v;
        int n=difficulty.size()-1;
        int index=n;
        for(int x=0;x<profit.size();x++)
        {
            v.push_back({profit[x],difficulty[x]});
        }
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
         int res=0;
        for(int x=worker.size()-1;x>=0;x--)
        {
            while(index>=0 && v[index].second>worker[x])
            {
                index--;
            }
            if(index==-1)
            {
              continue;
            }
            res+=v[index].first;
        }
        return res;


    }
};