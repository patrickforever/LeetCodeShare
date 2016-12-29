void DFSCount(struct TreeNode* root, int sum , int *answer)
{
    if(!root)
        return ;
    sum -= root->val;
    if(sum == 0)
        (*answer) ++;
    if(root->left)
        DFSCount(root->left,sum,answer);
    if(root->right)
        DFSCount(root->right,sum,answer);
}
void DFSTrack(struct TreeNode* root, int sum , int *answer)
{
    if(!root)
        return;
    DFSCount(root,sum,answer);
    if(root->left)
        DFSTrack(root->left,sum,answer);
    if(root->right)
        DFSTrack(root->right,sum,answer);
}
int pathSum(struct TreeNode* root, int sum) {
    int answer = 0;
    DFSTrack(root,sum , &answer);
    return answer;
}
