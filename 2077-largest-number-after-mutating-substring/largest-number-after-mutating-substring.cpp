class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
       
        for(int x=0;x<num.size();x++)
        {
            int val=(num[x]-'0');
            if(change[val] > val)
            {
                while(x<num.size() && change[num[x]-'0'] >= (num[x]-'0') )
                {
                    num[x]='0'+change[num[x]-'0'];
                    x++;
                }
                break;
            }
        }
        return num;
    }
};