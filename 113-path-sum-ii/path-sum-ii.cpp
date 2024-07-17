/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>ans;
        check(root,res,ans,targetSum);
        return res;
    }
    void check(TreeNode* root,vector<vector<int>>&res,vector<int>&ans,int targetSum)
    {
        if(!root)
        {
            return ;
        }
        ans.push_back(root->val);
        if(root->left==NULL && root->right==NULL && targetSum==root->val)
        {
            res.push_back(ans);
        }
        check(root->left,res,ans,targetSum-root->val);
        check(root->right,res,ans,targetSum-root->val);
        ans.pop_back();
    }
};