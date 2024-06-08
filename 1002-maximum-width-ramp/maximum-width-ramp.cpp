class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
      
      stack<pair<int,int>>st;
      st.push({nums[0],0});
      int store=nums[0];

      for(int x=1;x<nums.size();x++)
      {

        if(nums[x]<store)
        {
            store=nums[x];
            st.push({store,x});
        }
      }
     int maxa=0;
      for(int x=nums.size()-1;x>=0;x--)
      {
        while(!st.empty())
        {
            if(st.top().first<=nums[x])
            {
                int pos=st.top().second;
                maxa=max(maxa,x-pos);
                st.pop();
            }
            else{
                break;
            }
        }
      }
      return maxa;
    }
};