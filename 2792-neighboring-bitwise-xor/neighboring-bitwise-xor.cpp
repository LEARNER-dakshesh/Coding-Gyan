class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xora=0;
     for(int x=0;x<derived.size();x++)
     {
        xora=xora^derived[x];
     }
     return xora==0;
    }
};