class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    //    int maxa=*max_element(nums.begin(),nums.end());
    //    int size=nums.size();
    //    vector<int>v(size,0);
    //    for(int x=0;x<size;x++)
    //    {
    //        v[nums[x]]++;
    //    } 
    //    for(int x=1;x<=maxa;x++)
    //    {
    //        v[x]+=v[x-1];
    //    }
    //    vector<int>output;
    //    for(int x=size-1;x>=0;x--)
    //    {
    //        output[--v[nums[x]]]=nums[x];
    //    }
    //    nums.clear();
    //    for(int x=0;x<size;x++)
    //    {
    //        nums.push_back(output[x]);
    //    }
    //    return nums;
 priority_queue<int>pq;
    for(int x=0;x<nums.size();x++)
    {
        pq.push(nums[x]);
    }
    vector<int>v;
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    vector<int>v2;
    for(int x=v.size()-1;x>=0;x--)
    {
        v2.push_back(v[x]);
    }
    return v2;
    }
};