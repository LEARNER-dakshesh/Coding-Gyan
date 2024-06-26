class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
            //   int n = nums.size();
            //  vector<int>kpy=nums;
            //  sort(kpy.begin(),kpy.end());
            //  vector<int>index;
            //  int cnt=0;
            //  for(int x=0;x<nums.size();x++)
            //  {
            //     int greater_val=lower_bound(kpy.begin(),kpy.end(),nums[x]);
            //     if(*greater_val>nums[x] && find(index.begin(),index.end(),greater_val))
            //     {
            //         index.push_back(greater_val);
            //         cnt++;
            //     }

            //  }
            //  return cnt;
            sort(nums.begin(),nums.end());
            int store;
            for(int x=0;x<nums.size();x++)
            {
                if(nums[x]>nums[0])
                {
                    // cout<<"hi";
                    store=x;
                //    cout<<store<<endl; 
                   break;
                    
                }
            }
            int cnt=0;
            int start=store;
            for(int x=0;x<nums.size();x++)
            {
                while(start<nums.size())
                {
                    if(nums[x]<nums[start])
                    {
                        // cout<<nums[x]<<" "<<nums[store]<<endl;
                        cnt++;
                        start++;
                        break;
                    }
                    start++;
                }
                if(start==nums.size())
                {
                    return cnt;
                }
            }
          return cnt;
    }
};