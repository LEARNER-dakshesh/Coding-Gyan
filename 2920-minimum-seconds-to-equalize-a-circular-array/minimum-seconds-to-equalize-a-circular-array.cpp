class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        map<int,vector<int>>mp;
        int n=nums.size();
        for(int x=0;x<nums.size();x++)
        {
            mp[nums[x]].push_back(x);
        }

        int ans=INT_MAX;
        for(auto x:mp)
        {
            vector<int>v=x.second;
            int maxa=INT_MIN;
            // cout<<x.first<<" "<<v.size()<<" "<<endl;
            for(int i=0;i<v.size()-1;i++)
            {
                // cout<<v[i+1]-v[i]<<endl;
               int calc=ceil((v[i+1]-v[i])/2);
            //    cout<<calc/2<<endl;
               maxa=max(maxa,calc);
            } 
        //    cout<<(abs(v[v.size()-1]-n)+v[0]-0)<<endl;
            int last=v[0]-v[v.size()-1]+nums.size();
            int cir=ceil(last/2);

            // cout<<last<<endl;
            maxa=max(maxa,cir);
            // cout<<maxa<<endl;
            ans=min(ans,maxa);
        }
       


        return ans;


    }
};