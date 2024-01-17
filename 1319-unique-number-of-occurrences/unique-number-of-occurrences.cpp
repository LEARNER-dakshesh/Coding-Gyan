class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
       for(int x=0;x<arr.size();x++)
       {
           m[arr[x]]++;
       }
        // for(auto z :m)
        // {
        //     cout<<z.second<<endl;
        // }
        // for(auto x:m)
        // {
        //         if(x.second!=x.end())
        //         {
        //             return false;
        //         }
        //     }
        set<int>s;
        for(auto x:m)
        {
            s.insert(x.second);
        }
        return s.size() == m.size();
        
        
    }
};