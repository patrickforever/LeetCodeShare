/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;
        dfs(root,to_string(root->val),res);
        return res;
    }
    void dfs(TreeNode* root , string path, vector<string>& res)
    {
        if(!root->left && !root->right)
            res.push_back(path);
        if(root->left)
            dfs(root->left,path + "->" + to_string(root->left->val),res);
        if(root->right)
            dfs(root->right,path + "->" + to_string(root->right->val),res);
    }
};
