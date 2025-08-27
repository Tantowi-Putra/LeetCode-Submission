/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        if(root) q.push(root);
        
        vector<vector<int>> res;
        bool flip = false;
        while(!q.empty()) {
            int qSize = q.size();
            vector<int> temp;

            for(int i = 0; i < qSize; i++) {
                TreeNode *front = q.front(); q.pop();
                temp.push_back(front->val);

                if(front->left)  q.push(front->left);
                if(front->right) q.push(front->right);  
            }

            if(flip)reverse(temp.begin(), temp.end());
            flip = !flip; 
            res.push_back(temp);
        }


        return res;
    }
};