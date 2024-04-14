class Solution {
public:
void seive(vector<int>&v)
{
v[1]=1;
for(int x=2;x*x<v.size();x++)
{
  if(v[x]==0)
  {
    for(int y=x*x;y<v.size();y=y+x)
    {
        v[y]=1;
    }
  }
}
}
    int maximumPrimeDifference(vector<int>& nums) {
        int maxa=*max_element(nums.begin(),nums.end());
        vector<int>v(maxa+10,0); 
        seive(v);
        vector<int>ans;
        for(int y=0;y<nums.size();y++)
        {
            ans.push_back(v[nums[y]]);
        }
        int first=INT_MAX,last=INT_MAX;
        for(int x=0;x<ans.size();x++)
        {
            if(ans[x]==0)
            {
                first=x;
                break;
            }
        }
        for(int y=ans.size()-1;y>=0;y--)
        {
            if(ans[y]==0)
            {
                last=y;
                break;
            }
        }
        cout<<first<<" "<<last;
        if(first!=INT_MAX && last!=INT_MAX)
        {
            return abs(first-last);
        }
        return 0;
    }
};