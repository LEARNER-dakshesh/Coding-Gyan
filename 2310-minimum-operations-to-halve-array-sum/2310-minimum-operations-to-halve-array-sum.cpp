class Solution {
public:
    int halveArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        long long totsum = accumulate(nums.begin(),nums.end(),0LL);
       
        double half=static_cast<double>(totsum)/2.0;
    
        priority_queue<double>pq;
        for(int x=0;x<nums.size();x++)
        {
            pq.push(static_cast<double>(nums[x]));
        }

        int cnt=0;
        double currSum = static_cast<double>(totsum);
        while(currSum>half && !pq.empty())
        {
            double top=pq.top();
            double dedct=static_cast<double>(top)/2.0;
            currSum-=dedct;
            cnt++;
            pq.pop();
            pq.push(dedct);
        }
        return cnt;
        }
      
};