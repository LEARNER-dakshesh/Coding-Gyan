class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         map<int,int>mp;

        for(int x=0;x<arr.size();x++)
        {
            mp[arr[x]]++;
        }

        for(int  x=0;x<arr.size();x++)
        {
            if(mp[arr[x]]!=0 && mp[2*arr[x]]!=0)
            {
                mp[arr[x]]--;
                mp[2*arr[x]]--;
            }
        }

        for(int x=0;x<arr.size();x++)
        {
            if(mp[arr[x]]!=0)
            {
                return false;
            }
        }
        return true;
    }
};