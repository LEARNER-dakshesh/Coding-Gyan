class Solution {
public:
    vector<vector<int>> ans;
    void  helper(vector<int>num,int index, vector<int>res)
    {
        if(index==num.size())
        {
            ans.push_back(res);
            return ;
        }
        helper(num,index+1,res);
        res.push_back(num[index]);
        helper(num,index+1,res);

        return ;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<int>temp;
        helper(nums,0,temp);
        return ans;
    }
};