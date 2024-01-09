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
    // bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // vector<int>v1;
        // // if(root1==NULL)
        // // {
        // //     return 0;
        // // }
        // queue<TreeNode*>q;
        // q.push(root1);
        // while(!q.empty())
        // {
        //    TreeNode* t=q.front();
        //     if(t->left==NULL && t->right==NULL)
        //     {
        //         v1.push_back(t->val);
        //     }
        //     if(t->left)
        //     {
        //         q.push(t->left);
        //     }
        //     if(t->right)
        //     {
        //         q.push(t->right);
        //     }
        //     q.pop();
        // }

        // for(int x=0;x<v1.size();x++)
        // {
        //     cout<<v1[x]<<endl;
        // }

        // vector<int>v2;
        // // if(root2==NULL)
        // // {
        // //     return 0 ;
        // // }
        // queue<TreeNode*>q2;
        // q2.push(root2);
        // while(!q2.empty())
        // {
        //     TreeNode* t=q2.front();
        //     if(t->left==NULL && t->right==NULL)
        //     {
        //         v1.push_back(t->val);
        //     }
        //     if(t->left)
        //     {
        //         q2.push(t->left);
        //     }
        //     if(t->right)
        //     {
        //         q2.push(t->right);
        //     }
        //     q2.pop();
        // }
        // for(int x=0;x<v1.size();x++)
        // {
        //     if(v1[x]!=v2[x])
        //     {
        //         return false ;
        //         break ;
        //     }
        // }
        // return true;
        void leaf(TreeNode* root,vector<int>& v){
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            v.push_back(root->val);
        leaf(root->left,v);
        leaf(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v,m;
        leaf(root1,v);
        leaf(root2,m);
        return v == m;
    }


};