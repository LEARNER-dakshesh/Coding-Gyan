class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        
        int top=0,bottom = n-1,left = 0, right = n-1;
        int dir= 0; 
        int val=1;
        while(top <= bottom && left <= right) 
        {
           if(dir == 0) 
           {
              for(int x = left; x <= right ; x++)
              {
                matrix[top][x] = val++;
              }
              top++;
           }
           else if(dir == 1)
           {
              for(int x = top; x <= bottom ; x++)
              {
                matrix[x][right]= val++;
              }
              right--;
           }
           else if(dir==2)
           {
               for(int x= right; x >= left; x--)
               {
                matrix[bottom][x]= val++; 
               }
               bottom--;
           }
           else if(dir==3)
           {
            for(int x= bottom; x>=top ; x--)
            {
                matrix[x][left]=val++;
            }
            left++;
           }
           dir=(dir+1)%4;
        }
        return matrix;
    }
};