class Solution {
public:
    string intToRoman(int num) {
        string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int n[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string w="";
          for(int x=0;x<13;x++)
          {
           while(num-n[x]>=0)
           {
            w+=s[x];
            num=num-n[x];
           }
          }
    return w;
    }
};