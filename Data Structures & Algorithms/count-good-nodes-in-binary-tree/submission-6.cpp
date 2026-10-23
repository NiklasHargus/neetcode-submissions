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

    int dfs(TreeNode *node, int comp_max){
        if (!node) return 0;

        int left = 0;
        int right = 0;
        int increase = 0;
        if(comp_max <= node->val){
            comp_max = node->val;
            increase = 1;
        }

        left += dfs(node->left, comp_max);
        right += dfs(node->right, comp_max);

        return left + right + increase;
    }

    int goodNodes(TreeNode* root) {
        return dfs (root, std::numeric_limits<int>::min());
    }
};
