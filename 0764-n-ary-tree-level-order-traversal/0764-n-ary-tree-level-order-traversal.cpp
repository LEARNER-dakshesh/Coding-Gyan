/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        if (!root) return res; 

        queue<Node*>q;
        q.push(root);

        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans;

            for(int x=0;x<size;x++)
            {
               Node *node=q.front();
                q.pop();

                ans.push_back(node->val);

               for (Node* child : node->children) {
                    if (child) {
                        q.push(child);
                    }
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};