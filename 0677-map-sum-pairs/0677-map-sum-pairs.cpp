class MapSum {
public:
map<string,int>mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int len=prefix.size();
        int sum=0;
        for(auto x:mp)
        {
            string s=x.first;
            if(s.substr(0,len)==prefix)
            {
                sum+=x.second;
            }
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */