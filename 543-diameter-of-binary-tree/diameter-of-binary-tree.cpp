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
int maxa=INT_MIN;
int calc(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=calc(root->left);
    int rh=calc(root->right);

    maxa=max(maxa,(lh+rh));

    return (max(lh,rh)+1);
}
    int diameterOfBinaryTree(TreeNode* root) {
         int ma=calc(root);
         return maxa;
    }
};