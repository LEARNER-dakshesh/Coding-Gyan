class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
       int n=0;
        for(int x=1;x<10;x++)
        {
            n=x;
            for(int y=x+1;y<10;y++)
            {
                n=(n*10)+y;
                if(n>=low && n<=high)
                {
                    ans.push_back(n);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};