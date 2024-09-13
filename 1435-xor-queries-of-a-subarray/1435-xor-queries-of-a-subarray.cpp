class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

     vector<int>prexor;
     int ans=0;
     for(int x=0;x<arr.size();x++)
     {
        prexor.push_back(ans^arr[x]);
        // cout<<prexor.back()<<" ";
        ans=prexor.back();
     }   
     vector<int>res;
     for(int x=0;x<queries.size();x++)
     {
        int start=queries[x][0];
        int end=queries[x][1];
        int sxor;
        if(start-1>=0)
        {
         sxor=prexor[end]^prexor[start-1];
        }
        else{
         sxor=prexor[end];
        }
        res.push_back(sxor);
        // cout<<sxor<<" ";
     }
     return res;
    }
};