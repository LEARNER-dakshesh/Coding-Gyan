class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int x=0;x<values.size();x++)
        {
            pq.push({values[x],labels[x]});
        }
        int sum=0;

        while(!pq.empty())
        {
            if(numWanted<=0)
            {
                break;
            }
            int labelx=pq.top().second;
            if(mp[labelx]<useLimit)
            {
                cout<<pq.top().first<<" ";
                sum+=pq.top().first;
                mp[labelx]++;
                numWanted--;
            }
            pq.pop();
        }
        return sum;

    }
};