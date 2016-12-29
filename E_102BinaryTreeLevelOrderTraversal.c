class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root) return ret;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int maxSize = q.size();
            vector<int> vCur;
            for(int i=0;i<maxSize;i++)
            {
                TreeNode *pCur = q.front();
                q.pop();
                vCur.push_back(pCur->val);
                if(pCur->left) q.push(pCur->left);
                if(pCur->right) q.push(pCur->right);
            }
            ret.push_back(vCur);

        }
        return ret;
    }
};
