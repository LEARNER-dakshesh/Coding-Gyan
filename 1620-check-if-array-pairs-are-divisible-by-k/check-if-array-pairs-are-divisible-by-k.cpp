class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>v(k,0);

        for(int x=0;x<arr.size();x++)
        {
            v[((arr[x]%k)+k)%k]++;
        }
        if(v[0]%2!=0)
        {
            return false;
        }

        for(int x=1;x<=k/2;x++)
        {
            if(v[x]!=v[k-x])
            {
                return false;
            }
        }
        return true;
    }
};