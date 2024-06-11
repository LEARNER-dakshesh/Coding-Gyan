class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp1;
        for(int x=0;x<arr1.size();x++)
        {
            mp1[arr1[x]]++;
        }
       for(auto x: mp1)
        {
           if(find(arr2.begin(), arr2.end(), x.first) == arr2.end())
            {
              arr2.push_back(x.first);
            }
        }
        vector<int>v;
        for(int x=0;x<arr2.size();x++)
        {
            if(mp1.find(arr2[x])!=mp1.end())
            {
                int count=mp1[arr2[x]];
                while(count--)
                {
                  v.push_back(arr2[x]);
                }
            }
            else{
                v.push_back(arr2[x]);
            }
        }
        return v;
       
    }
};