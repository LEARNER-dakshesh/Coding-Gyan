class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int maxcommon=0;

        int nrow=matrix.size();
        int ncol=matrix[0].size();

        for(auto& currRow:matrix)
        {
            vector<int>inverted(ncol);
            for(int x=0;x<ncol;x++)
            {
                inverted[x]=currRow[x] == 0 ? 1 : 0;
            }
            int count=0;

            for(auto row :matrix)
            {
                if(row==currRow || row == inverted)
                {
                    count++;
                }
            }
            maxcommon=max(maxcommon,count);
        }
        return maxcommon;
    }
};