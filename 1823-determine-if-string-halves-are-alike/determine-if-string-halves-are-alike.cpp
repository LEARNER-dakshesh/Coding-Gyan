class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=s.length();
        int mid=l/2;
        int c1=0,c2=0;
        for(int x=0;x<mid;x++)
        {
            if(s[x] =='a' || s[x] =='e' || s[x] =='i' || s[x] =='o' || s[x] =='u'
              || s[x] =='A' || s[x] =='E' || s[x] =='I' || s[x] =='O' || s[x] =='U')
            {
                c1++;
            }
            
        }
         for(int x=mid;x<l;x++)
        {
            if(s[x] =='a' || s[x] =='e' || s[x] =='i' || s[x] =='o' || s[x] =='u'
              || s[x] =='A' || s[x] =='E' || s[x] =='I' || s[x] =='O' || s[x] =='U')
            {
                c2++;
            }
            
        }
        return c1==c2;
    }
};