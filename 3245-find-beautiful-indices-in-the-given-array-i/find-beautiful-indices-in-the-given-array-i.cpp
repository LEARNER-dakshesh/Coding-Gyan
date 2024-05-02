class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> result;
        int m = a.length();
        int p = b.length();

        vector<int> v;
        for (int x = 0; x <= s.size()-m; x++) {
            if(x+m<=s.size()){
            if (s.substr(x, m) == a) {
                v.push_back(x);
            }
            }
            else{
                break;
            }
        }
        vector<int>v2;
        for (int x = 0; x <= s.size()-p; x++) {
            if(x+p<=s.size())
            {
            if (s.substr(x, p) == b) {
                v2.push_back(x);
            }
            }
            else{
                break;
            }
        }
      if(v.size()>=1 && v2.size()>=1){
      for (int x = 0; x < v.size(); x++) {
    for (int y = 0; y < v2.size(); y++) {
        if (abs(v[x] - v2[y]) <= k) {
            result.push_back(v[x]);
            break;
        }
    }
      }
}

        return result;
    }
};
