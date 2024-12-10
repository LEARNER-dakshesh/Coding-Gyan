class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        string ans[numRows];

        for(int x=0;x<numRows;x++)
        {
            ans[x]="";
        }
        int i=0;
        while(i<s.size())
        {
            for(int index=0;index<numRows && i<n;index++)
            {
                // cout<<index<<s[i]<<endl;
                ans[index]+=s[i];
                i++;
            }
            for(int index=numRows-2;index>0 && i<n;index--)
            {
                ans[index]+=s[i];
                i++;
            }
        }
        string res="";
        for(string str:ans)
        {
            res+=str;
        }
        return res;
    }
};