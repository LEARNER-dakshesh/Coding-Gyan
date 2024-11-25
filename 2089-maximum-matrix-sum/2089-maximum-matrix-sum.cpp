class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;  
        int minAbs = INT_MAX;   
        int negativeCount = 0;  

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                int val = matrix[i][j];
                totalSum += abs(val);  
                minAbs = min(minAbs, abs(val)); 
                if (val < 0) {
                    negativeCount++; 
                }
            }
        }

        if (negativeCount % 2 != 0) {
            totalSum -= 2 * minAbs;
        }

        return totalSum;
    }
};
