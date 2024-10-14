class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
      long long  score = 0;
  priority_queue<int> pq(nums.begin(), nums.end());

    for(int i=0;i<k;i++) 
    {
        if (pq.empty()) 
        { 
            return score;
        }
        int top=pq.top();
        score+=top;
        pq.pop();
        int next = ceil(top / 3.0);
        if (next > 0) 
        {
            pq.push(next);
        }
    }
    return score;
    }
};