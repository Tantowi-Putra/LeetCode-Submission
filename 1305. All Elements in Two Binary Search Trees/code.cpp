class Solution {
public:
    void generateSortedList(TreeNode *root, vector<int> &list) {
        if(!root) return;

        generateSortedList(root->left, list);
        list.push_back(root->val);
        generateSortedList(root->right, list);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> list1;
        vector<int> list2;

        generateSortedList(root1, list1);
        generateSortedList(root2, list2);

        int l1Size = list1.size();
        int l2Size = list2.size();

        int ptr = 0;
        vector<int> merged(list1.size() + list2.size(), 0);

        int i = 0, j = 0;
        while(i < l1Size && j < l2Size) {
            if(list1[i] <= list2[j]) {
                merged[ptr++] = list1[i];
                i++;
            } else if(list1[i] > list2[j]) {
                merged[ptr++] = list2[j];
                j++;
            }
        }

        while(i < l1Size) {
            merged[ptr++] = list1[i];
            i++;
        }

        while(j < l2Size) {
            merged[ptr++] = list2[j];
            j++;
        }

        return merged;
    }
};