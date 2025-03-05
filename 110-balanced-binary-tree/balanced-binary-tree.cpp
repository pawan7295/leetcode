
class Solution {
public:
int height(TreeNode* root)
{
    if(root==NULL)
    return 0;
    int leftheight=height(root->left);
    if(leftheight==-1)
    return -1;

    int rightheight=height(root->right);
    if(rightheight==-1)
    return -1;

    if(abs(leftheight-rightheight)>1)
    return -1;

    return max(leftheight,rightheight)+1;

}
    bool isBalanced(TreeNode* root) {
        height(root);
        if(height(root)==-1)
        return false;
        else
        return  true;
    }
};