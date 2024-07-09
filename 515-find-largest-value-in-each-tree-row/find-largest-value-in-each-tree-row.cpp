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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<int>res;

        while(!q.empty())
        {
            TreeNode* front=q.front();
            int n=q.size();
            int maxa=INT_MIN;
            while(n--)
            {
                maxa=max(maxa,q.front()->val);
                TreeNode *adj=q.front();
                if(adj->left)
                {
                    q.push(adj->left);
                }
                if(adj->right)
                {
                    q.push(adj->right);
                }
                q.pop();
            }
            res.push_back(maxa);
        }

        return res;
    }
};