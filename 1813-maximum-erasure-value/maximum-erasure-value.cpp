class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0;
        int maxa=INT_MIN;
        int sum=0;
        unordered_map<int,int>mp;
        while(j<nums.size())
        {      
                mp[nums[j]]++;
                sum+=nums[j];
            if(mp[nums[j]]>1)
            {
                cout<<i<<" "<<j<<endl;
            while(mp[nums[j]]>1)
            {
                sum-=nums[i];
                mp.erase(nums[i]);
                i++;
            }
            mp[nums[j]]++;
            
            }
            maxa=max(sum,maxa);
            j++;
        }
        maxa=max(maxa,sum);
        return maxa;
       
    }
};