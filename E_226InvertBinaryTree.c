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

struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode* temp;
    if(!root)
        return NULL;
    else
    {
        temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);
    }
    return root;
}
