class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // map<int,int>mp;
        // for(int x=0;x<nums.size();x++)
        // {
        //     mp[nums[x]]++;
        // }
        // priority_queue<pair<int,int>>pq;
        // for(auto x:mp)
        // {
        //     pq.push({x.second,x.first});
        // }

        // int max_freq=pq.top().first;
        // int ele=pq.top().second;
        
        // cout<<max_freq<<" "<<ele<<endl;
        // sort(nums.begin(),nums.end());
        // int idx;
        // for(int x=0;x<nums.size();x++){
        //     if(nums[x]==ele)
        //     {
        //         idx=x;
        //         break;
        //     }
        // }
        // cout<<idx<<endl;
        // int cnt=max_freq;
        // for(int x=idx-1;x>=0 && k>0;x--)
        // {
        //     if(ele-nums[x]<=k)
        //     {
        //         k=k-(ele-nums[x]);
        //         cnt++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // cout<<k<<endl;
        // return cnt;

        sort(nums.begin(),nums.end());

        long long i=0,j=0,totsum=0;
        long long maxa=0;
        while(j<nums.size())
        {
            totsum+=nums[j];

            while((nums[j]*(j-i+1))>totsum+k)
            {
                totsum-=nums[i];
                i++;
            }
           maxa=max(maxa,j-i+1);
           j++;
        }
       return maxa;
    }
};