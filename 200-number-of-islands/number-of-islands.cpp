class Solution {
public:

    bool isValid(int x,int y, int r, int c, vector<vector<char>>&grid)
    {
        if( x>=0 && x<r &&  y>=0 && y<c && grid[x][y]=='1')
        {
            return true;
        }
        return false;
    }
    void calcIsland(int x,int y, int r, int c, vector<vector<char>>&grid)
    {

        grid[x][y]='0';
        if(isValid(x+1,y,r,c,grid))
        {
           calcIsland(x+1,y,r,c,grid);
        }
        if(isValid(x-1,y,r,c,grid))
        {
           calcIsland(x-1,y,r,c,grid);
        }
        if(isValid(x,y+1,r,c,grid))
        {
           calcIsland(x,y+1,r,c,grid);
        }
        if(isValid(x,y-1,r,c,grid))
        {
           calcIsland(x,y-1,r,c,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();

        int count=0;
        for(int x=0;x<r;x++)
        {
            for(int y=0;y<c;y++)
            {
                if(grid[x][y]=='1')
                {
                    count++;
                    calcIsland(x,y,r,c,grid);
                }
            }
        }

        return count;
    }
};