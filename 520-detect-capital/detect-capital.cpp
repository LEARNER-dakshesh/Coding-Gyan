class Solution {
public:
    bool detectCapitalUse(string word) {
        int l=word.length();
        if(l==1)
        {
            return true;
        }
        int c=0;
        int k=0;
        
        for(int x=0;x<l;x++)
        {
          if(word[x]>=65 && word[x]<=90)
          {
         // cout<<word[x]<<" ";
          c++;
          if(word[x]!=word[0])
          {
               k++;
          } 
          }     
          
          }//cout<<k;
          if(c==1 && word[0]>=65 && word[0]<=90)
          {
              return true;
          }
          if(c==word.size() || c==0)
          {
              return  true ;
          }
          return false;
    }
};