class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      map<char,int>mp;
      int c=0;
      int len=0;
    int maxa=0;
   for(int x=0;x<s.size();x++)
   {
       mp[s[x]]++;
       len++;
       while(mp[s[x]]>1)
       {
           len--;
           mp[s[c++]]--;
       }
       maxa=max(len,maxa);
   }
   return maxa;
}
};