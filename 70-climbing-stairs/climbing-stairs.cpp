class Solution {
public:
    int climbStairs(int n) {
       int a=0,b=1;
    int c;
     for(int x=0;x<n;x++)
     {
        c=a+b;
         a=b;
         b=c;
     }
    return  c;

    }
};