class Solution {
public:
vector<vector<int>>ans;
    
    void combiationSumHelper(vector<int>& candidates, int target, int i, int currSum,vector<int>temp)
    {
        if(currSum>target)
        {
            return ;
        }

        if(i==candidates.size())
        {
            if(currSum==target)
            {
                ans.push_back(temp);
            }
            return ;
        }

        currSum+=candidates[i];
        temp.push_back(candidates[i]);
        combiationSumHelper(candidates,target,i,currSum,temp);
        currSum-=candidates[i];
        temp.pop_back();
        
        combiationSumHelper(candidates,target,i+1,currSum,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        combiationSumHelper(candidates,target,0,0,temp);
        return ans;
    }
};