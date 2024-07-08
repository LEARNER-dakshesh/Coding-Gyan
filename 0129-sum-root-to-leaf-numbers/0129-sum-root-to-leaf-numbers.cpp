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
int sum=0;
   void calcSum(TreeNode* root, string store)
   {
    if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
        store+=to_string(root->val);
        sum+=stoi(store);
        store.pop_back();
    }
    store+=to_string(root->val);
    calcSum(root->left,store);
    calcSum(root->right,store);

   }
    int sumNumbers(TreeNode* root) {
        string store=""; 
        calcSum(root,store);
        return sum;
    }
};