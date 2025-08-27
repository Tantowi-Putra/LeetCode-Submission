class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode *> q;
        if(root) q.push(root);

        vector<int> res;

        while(!q.empty()) {
            int qSize  = q.size();
            int maxVal = INT_MIN;

            for(int i = 0; i < qSize; i++) {
                TreeNode *front = q.front(); q.pop();
                maxVal = max(maxVal, front->val);

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }

            res.push_back(maxVal);
        }

        return res;
    }
};