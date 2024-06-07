class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        map<string, int> mp;
        for (int x = 0; x < dict.size(); x++) {
            mp[dict[x]]++;
        }
        vector<string>v;
        string w="";
        for(int x=0;x<sentence.size();x++)
        {
            if(sentence[x]!=' ')
            {
                w+=sentence[x];
            }
            else{
            v.push_back(w);
            w="";
        }
        } v.push_back(w);
        string final = "";
        for (auto ch : v) {
            int f = 0;
                string w="";
            string word=ch;
            for (int x=0;x<word.size();x++) {
                w += word[x];
                if (mp.find(w) != mp.end()) {
                    f = 1;
                    final += w;
                    final+=" ";
                    break;
                }
            }
            if (f == 0) {
                final += ch;
                final+=" ";
            }
        }
string res="";
for(int x=0;x<final.size()-1;x++)
{
    res+=final[x];
}
        return res;
    }
};