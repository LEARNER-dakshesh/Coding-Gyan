class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre0(n,0);
        vector<int>pre1(n,0);

        // if(nums[0]==0)
        // {
        //     pre0[0]=1;
        //     pre1[0]=0;
        // }
        // else{
        //     pre1[0]=1;
        //     pre0[0]=0;
        // }

        // for(int x=1;x<nums.size();x++)
        // {
            
        //     if(nums[x]==0)
        //     {
        //         pre0[x]=pre0[x-1]+1;
        //         pre1[x]=pre1[x-1];
        //     }
        //     else {
        //         pre1[x]=pre1[x-1]+1;
        //         pre0[x]=pre0[x-1];
        //     }
        // }
        // for(int x=0;x<pre0.size();x++)
        // {
        //     cout<<pre0[x]<<" ";
        // }
        // cout<<endl;
        // for(int y=0;y<pre1.size();y++)
        // {
        //     cout<<pre1[y]<<" ";
        // }
        // cout<<endl;
        // int ans=0;
        // for(int x=0;x<pre0.size();x++)
        // {
        //     if(pre0[x]==pre1[x])
        //     {
        //         ans=max(ans,pre0[x]+pre1[x]);
        //     }
        // }
        // return ans;
        vector<int>v(n);
        int sum=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]==1)
            {
                sum+=1;
                v[x]=sum;
            }
            else{
                sum-=1;
                v[x]=sum;
            }
        }
        int ans=0;
        map<int,int>mp;
        mp[0] = -1;
        for(int x=0;x<v.size();x++)
        {
            if(mp.find(v[x])!=mp.end()){
                ans=max(ans,x-mp[v[x]]);
            }
            else{
                mp[v[x]]=x;
            }
        }
        return ans; 
    }
};