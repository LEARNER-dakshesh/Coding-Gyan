class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int,int>>, vector<pair<double, pair<int,int>>>, greater<pair<double, pair<int,int>>>> pq;
        for(int x = 0; x < arr.size(); x++) { 
            for(int y = x + 1; y < arr.size(); y++) 
           {
            pq.push({static_cast<double>(arr[x]) / arr[y], {arr[x], arr[y]}});
           }
        }
        while(k>0 && !pq.empty())
        {
            auto p=pq.top();
            k--;
            if(k==0)
            {
            return {p.second.first,p.second.second}; 
            }
             
            pq.pop();             
       }
       return {1,1};
    }
};