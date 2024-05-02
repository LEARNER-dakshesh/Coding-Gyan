class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int cnt=0;
        string w="";
        while(b.size()>w.size())
        {
            cnt++;
            w+=a;
        }
        if(w.find(b)!=-1)
        {
           
            return cnt;
        }
        w+=a;
        if(w.find(b)!=-1)
        {
            return cnt+1;
        }
        return -1;
    }
};