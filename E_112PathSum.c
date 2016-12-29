#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

bool hasPathSum(struct TreeNode* root, int sum) {
    if(!root)
        return false;
    if(root->val==sum && !root->left && !root->right)
        return true;
    return hasPathSum(root->left,sum-root->val) || hasPathSum(root->right,sum-root->val);
}
