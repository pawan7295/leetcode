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
// void leftside(TreeNode* root,vector<int> &v)
// {
//     if(root==NULL)
//     return;
//     leftside(root->left,v);
//     v.push_back(root->val);
//     leftside(root->right,v);
// }
// void rightside(TreeNode* root,vector<int> &u)
// {
//     if(root==NULL)
//     return;
//     rightside(root->right,u);
//     u.push_back(root->val);
//     rightside(root->left,u);
// }
bool mirror(TreeNode* t1,TreeNode* t2)
{
    if(!t1 && !t2) return true;
    if(!t1 || !t2) return false;

    return t1->val==t2->val && mirror(t1->left,t2->right) && mirror(t1->right,t2->left);
}

    bool isSymmetric(TreeNode* root) {
        // vector<int> v;
        // vector<int> u;
        // leftside(root->left,v);
        // rightside(root->right,u);
        // if(v.size()!=u.size())
        // return false;
        // for(int i=0;i<v.size();i++)
        // {
        //     if(v[i]!=u[i])
        //     return false;
        // }
        // return true;

        return mirror(root->left,root->right);
    }
};