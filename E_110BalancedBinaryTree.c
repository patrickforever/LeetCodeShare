/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define Max(a,b) ((a>b)?a:b)
int DFSTrace(struct TreeNode* root )
{
    int left , right , diff;
    if(!root)
    {
        return true;
    }
    left = DFSTrace(root->left);
    right = DFSTrace(root->right);
    if(left == -1 || right == -1)
        return -1;
    diff = (right > left)?right-left : left - right;

    if(diff > 1)
        return -1;
    else
        return 1+Max(left,right);

}
bool isBalanced(struct TreeNode* root) {
    int height = 0;
    return (DFSTrace(root)==-1)?false:true;

}
