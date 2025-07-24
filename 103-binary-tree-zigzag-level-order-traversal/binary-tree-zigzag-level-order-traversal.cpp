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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nq;
        nq.push(root);
        bool lefttoright=true;
        while(!nq.empty())
        {
            int n=nq.size();
            vector<int> row(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* node=nq.front();
                nq.pop();

                int idx=(lefttoright) ? i : (n-1-i);
                row[idx]=node->val;
                if(node->left) 
                nq.push(node->left);
                if(node->right)
                nq.push(node->right);
            }
        lefttoright=!lefttoright;
        result.push_back(row);
    }
    return result;
    }
};