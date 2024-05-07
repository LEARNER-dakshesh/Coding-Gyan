class Solution {
public:
    vector<string> letterCombinations(string digits) {
       
        map<char,vector<char>>mp;
        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = {'d', 'e', 'f'};
        mp['4'] = {'g', 'h', 'i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x', 'y', 'z'};
        vector<string>res; 
        if(digits.size()==0)
        {
            return res;
        }
        res.push_back("");
        
        for(int x=0;x<digits.size();x++)
        {
            if(mp.find(digits[x])!=mp.end())
            {
                vector<char>EachLetter=mp[digits[x]];
                vector<string>Combi;
                for(auto result:res)
                {
                    for(auto ch:EachLetter)
                    {
                        Combi.push_back(result+ch);
                    }
                }
                res=Combi;
            }
        }
        return res;
        
    }
};