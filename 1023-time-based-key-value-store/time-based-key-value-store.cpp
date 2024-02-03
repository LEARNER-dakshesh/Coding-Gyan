class TimeMap {
public:
vector<string>v;
   map<int,pair<string,string>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[timestamp]={key,value};
    }
    
    string get(string key, int timestamp) {
      string prev = "";
    for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        if (it->second.first == key && it->first <= timestamp) {
            prev = it->second.second;
            break;
        }
    }
    return prev;
}
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */