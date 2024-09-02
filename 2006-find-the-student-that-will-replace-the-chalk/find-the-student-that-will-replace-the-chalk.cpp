class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long tot=accumulate(chalk.begin(),chalk.end(),0LL);
        long long left=k%tot;
        for(int x=0;x<chalk.size();x++)
        {
            if(left-chalk[x]<0)
            {
                return x;
            }
            left-=chalk[x];
        }
        return 0;
    }
};