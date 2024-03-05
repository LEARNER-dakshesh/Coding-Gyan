class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            int first=i+1;
            int last=j-1;
            while(first<=j && s[i]==s[first] )
            {
                first++;
            }
            while(last>=i && s[j]==s[last])
            {
                last--;
            }
            if(s[i]==s[j])
            {
                i=first;
                j=last;
            }
            else if(s[i]!=s[j]){
                return abs(j-i)+1;
            }
            if(j<i)
            {
                return 0;
            }
        }
        return abs(j-i)+1;

    }
};