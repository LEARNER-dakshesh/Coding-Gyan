class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)
        {
            return false;
        }

        long long l=0,r=sqrt(c);
        while(l<=r)
        {
           long long calc=(l*l)+(r*r);
           if(calc<c)
           {
               l++;
           }
           else if(calc>c)
           {
               r--;
           }
           if(calc==c)
           {
               return true;
           }
        }
        return false;

    }
};