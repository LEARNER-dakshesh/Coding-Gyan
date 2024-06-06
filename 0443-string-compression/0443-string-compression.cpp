class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>v=chars;
        chars.clear();
        int ans=0;
       
        for(int x=0;x<v.size();)
        {
            char curr=v[x];
            int count=0;
             while (x < v.size() && v[x] == curr) {
                count++;
                x++;
            }
            cout<<count<<" ";
            chars.push_back(curr);
            ans+=1;
            if(count>1)
            {
           string s = to_string(count);
           for (char c : s) { 
                chars.push_back(c);
                ans++; 
            } 
            } 
    }
    return ans;
    }
};