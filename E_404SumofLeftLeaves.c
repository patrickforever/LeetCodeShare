#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    int answer  = 0 ;
    sumOfLeftLeavesFN(root,&answer,0);
    return answer;
}
void sumOfLeftLeavesFN(struct TreeNode* root , int *answer , bool left)
{
    if(!root)
        return NULL;
    else if(!root->left && !root->right && left)
        *answer += root->val;
    else
    {
        sumOfLeftLeavesFN(root->left,answer,1);
        sumOfLeftLeavesFN(root->right,answer,0);
    }
}
