class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,int>mp;
        for(int x=0;x<arr.size();x++)
        {
            mp[arr[x]]=x;
        }
        int final=INT_MAX;
       
        for(int x=0;x<mat.size();x++)
        { int maxa_row=INT_MIN;
            for(int y=0;y<mat[0].size();y++)
            {
                maxa_row=max(maxa_row,mp[mat[x][y]]);
            }
            final=min(final,maxa_row);
        }  
        for(int x=0;x<mat[0].size();x++)
        {int maxa_col=INT_MIN;
            for(int y=0;y<mat.size();y++)
            {
                maxa_col=max(maxa_col,mp[mat[y][x]]);
            }
            final=min(final,maxa_col);
        }
    
return final;
    }
};