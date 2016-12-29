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
int maxDepth(struct TreeNode* root) {
    int leftAnswer = 0  , rightAnswer = 0 , answer;
    if(!root)
        return 0;
    else if(!root->left && !root->right)
        return 1;
    else
    {
        leftAnswer = maxDepth(root->left);
        rightAnswer = maxDepth(root->right);
        answer = (leftAnswer>rightAnswer)?leftAnswer+1 : rightAnswer+1;
    }
    return answer;
}
