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
    int findBottomLeftValue(TreeNode* root) {
        vector<int>res;
         left(root,0,res);
         int n=res.size();
         return res[n-1]; 
    }
    void left(TreeNode* root,int lvl,vector<int> &res)
    {
        if(!root){
            return ;
        }
        if(res.size()==lvl)
        {
            res.push_back(root->val);
        }
        left(root->left,lvl+1,res);
        left(root->right,lvl+1,res);
    }
};