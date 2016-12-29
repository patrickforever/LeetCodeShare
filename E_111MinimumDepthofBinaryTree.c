/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define MIN(a,b) ((a>b)?b:a)
int minDepth(struct TreeNode* root) {
    int left , right , diff;
    if(!root)
        return 0;
    left =  minDepth(root->left)+1;
    right = minDepth(root->right)+1;
    if(!root->left)
        return right;
    else if(!root->right)
        return left;
    else
        return MIN(left,right);
}
