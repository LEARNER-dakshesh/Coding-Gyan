class Solution {
public:
    string convert(string s, int numRows) {
        // map<char,int>m;
        // bool incr=true;
        // int pos=0;
        // for(char ch:s)
        // {
        //     if(pos==numRows)
        //     {
        //         incr=false;
        //     }
        //     if(pos==1)
        //     {
        //         incr=true;
        //     }
        //     if(incr)
        //     {
        //         pos++;
        //     }
        //     else
        //     {
        //         pos--;
        //     }
        //     if(m.find(pos)==m.end())
        //     {
        //         m.insert({ch,pos});
        //     }
        //     if(m.count(pos)==0)
        //     {
        //       m.insert({ch,pos});  
        //     }
        // }
        // string w="";
        // for(auto x:m)
        // {
        //     w+=x.first;
        // }
        // return w;
        if(numRows <= 1) return s;

    vector<string>v(numRows, ""); 

    int j = 0, dir = -1;

    for(int i = 0; i < s.length(); i++)
    {
        if(j == numRows - 1 || j == 0) dir *= (-1); 
		 
        v[j] += s[i];

        if(dir == 1) j++;

        else j--;
    }
    string res;

    for(auto &it : v) res += it; 

    return res;

    }
};