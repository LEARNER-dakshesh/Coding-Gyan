class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1;
        int top=0,bottom=n-1;
        vector<int>v;

        while(left<=right && top<=bottom)
        {
        for(int x=left;x<=right;x++)
        {
         v.push_back(matrix[top][x]);
        }
        top++;

        for(int x=top;x<=bottom;x++)
        {
            v.push_back(matrix[x][right]);
        }
        right--;

        if(top<=bottom){
        for(int x=right;x>=left;x--)
        {
            v.push_back(matrix[bottom][x]);
        }
        bottom--;
        }

        if(left<=right)
        {
        for(int x=bottom;x>=top;x--)
        {
            v.push_back(matrix[x][left]);
        }
        left++;
        }
       }
     return v;
    }
};