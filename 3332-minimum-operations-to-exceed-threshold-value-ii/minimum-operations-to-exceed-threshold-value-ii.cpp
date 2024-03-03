class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
    
        for(int x=0;x<nums.size();x++)
        { 
             pq.push(nums[x]);
        }
        int c=0;
        while(pq.top()<k)
         {
             long long  first=pq.top();
             pq.pop();
             long long second=pq.top();
             pq.pop();
             long add= min(first,second)*2+max(first,second);
             c++;
             pq.push(add);
         }
         return c;
    }
};