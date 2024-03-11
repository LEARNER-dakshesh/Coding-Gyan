class Solution {
public:
    int minOperations(int n) {
    
    int add_op=0,sub_op=0;
    for(int x=0;x<20;x++)
    {
        if(__builtin_popcount(n+(1<<x))<__builtin_popcount(n))
        {
            n=n+(1<<x);
            add_op++;
        }
    }
    sub_op=__builtin_popcount(n);
    return add_op+sub_op;
}

};