class LUPrefix {
public:
vector<int>v;
int cnt=0;
    LUPrefix(int n) {
       v.resize(n+2,INT_MAX);
    }
    
    void upload(int video) {
        v[video]=1;
    }
    
    int longest() {
         while(v[cnt+1]==1)
         {
            cnt++;
         }
        return cnt;
    }
};
