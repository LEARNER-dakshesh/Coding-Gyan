/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (!root) {
            return true;
        }

        queue<TreeNode*> q;
        q.push(root);
        int currLevel = 0;

        while (!q.empty()) {
            int size = q.size();
            int prev = (currLevel % 2 == 0) ? INT_MIN: INT_MAX;

            for (int x = 0; x < size; x++) {
                TreeNode* node = q.front();
                q.pop();
                if (currLevel % 2 == 0) {
                    if (node->val % 2 == 0 || node->val <= prev) {
                        return false;
                    }
                }

                if (currLevel % 2 == 1) {
                    if (node->val % 2 == 1 || node->val >= prev) {
                        return false;
                    }
                }
               prev=node->val;
            
               if(node->left)
               {
                q.push(node->left);
               }
               if(node->right)
               {
                q.push(node->right);
               }
            }
            currLevel++;
        }

     return true;
    }
};