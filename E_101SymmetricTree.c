bool judgeSymmetric(struct TreeNode* left , struct TreeNode* right)
{
    if(!left && !right)
        return true;
    else if(!left || !right)
        return false;
    else if(left->val == right->val)
        return (judgeSymmetric(left->left,right->right)) && (judgeSymmetric(left->right,right->left));
    else
        return false;
}
bool isSymmetric(struct TreeNode* root) {
    if(!root)
        return true;
    return judgeSymmetric(root->left,root->right);
}
