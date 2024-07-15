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
    TreeNode* createBinaryTree(vector<vector<int>>& desc) {
        


        map<int,TreeNode*>mp;
        map<int,int>parent,child;

        for(int x=0;x<desc.size();x++)
        {
            if(mp.find(desc[x][0])==mp.end())
            {
                mp[desc[x][0]]=new TreeNode(desc[x][0]);
            }
            if(parent.find(desc[x][1])==parent.end())
            {
                mp[desc[x][1]]=new TreeNode(desc[x][1]);
            }
            if(desc[x][2])
            {
                mp[desc[x][0]]->left=mp[desc[x][1]];
            }
            else{
                mp[desc[x][0]]->right=mp[desc[x][1]];
            }

            parent[desc[x][0]]++;
            child[desc[x][1]]++;
          

        }

        TreeNode *ans;
        for(auto it:mp)
        {
         if(parent.find(it.first)!=parent.end() && child.find(it.first)==child.end())
         {
            ans=it.second;
            break;
         }
        }
        return ans;


    }
};