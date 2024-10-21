class Solution {
public:
    bool isHappy(int N) {
      set<int>st;
    int sum=0;
    if(N==1)
    {
        return true;
    }
    while(N>1)
    {
        cout<<N<<endl;
        while(N>0)
        {
            int lastdig=N%10;
            sum+=lastdig*lastdig;
            N=N/10;
        }
        
        if(st.count(sum)==0)
        {
            st.insert(sum);
        }
        else
        {
            return false;
        }
        N=sum;
        sum=0;
        // cout<<sum<<endl;
        if(N==1)
        {
            return true;
        }
    }
    return false;
    }
};