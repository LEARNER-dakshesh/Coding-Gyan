class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        vector<vector<int>> xorMatrix(m, vector<int>(n));
        
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                int currXOR = matrix[i][j];
                
                if (i > 0) currXOR ^= xorMatrix[i-1][j];
                if (j > 0) currXOR ^= xorMatrix[i][j-1];
                if (i > 0 && j > 0) currXOR ^= xorMatrix[i-1][j-1];
                
                xorMatrix[i][j] = currXOR;
                
                pq.push(currXOR);
                
                if (pq.size() > k) {
                    pq.pop();
                }
            }
        }
        
        return pq.top();
    }
};
