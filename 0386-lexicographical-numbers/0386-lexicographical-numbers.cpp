class Solution {
public:
    vector<int> lexicalOrder(int n) {
        priority_queue<string,vector<string>,greater<string>>pq;

        for(int x=1;x<=n;x++)
        {
            pq.push(to_string(x));
        }

        vector<int>res;

        while(!pq.empty())
        {
            res.push_back(stoi(pq.top()));
            pq.pop();
        }
        return res;
    }
};