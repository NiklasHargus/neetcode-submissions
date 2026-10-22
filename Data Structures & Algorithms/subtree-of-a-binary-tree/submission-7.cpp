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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        if (same_tree(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool same_tree(TreeNode *root_node, TreeNode *sub_root){
        if (!root_node && !sub_root) return true;
        if (!root_node || !sub_root) return false;

        if(root_node->val == sub_root->val){
            bool left = same_tree(root_node->left, sub_root->left);
            bool right = same_tree(root_node->right, sub_root->right);
            return left && right;
        }
        return false;
    }
};
