class Solution {
public:
    bool isSubstringPresent(string s) {
          string w="";
        
        for(int x=s.size()-1;x>=0;x--)
        {
            w+=s[x];
        }
        set<string>st1;
        set<string>st2;
        for(int x=0;x<w.size()-1;x++)
        {
            string r = string(1, w[x]) + string(1, w[x + 1]);
            st1.insert(r);
        }
        for(int x=0;x<s.size();x++)
        {
            if(st1.count(string(1, s[x]) + string(1, s[x + 1])) > 0)
            {
                return true;
            }
        }
        return false;
    }
};