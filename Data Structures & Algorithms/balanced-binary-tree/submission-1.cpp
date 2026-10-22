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
    bool isBalanced(TreeNode* root) {

        auto result = dfs(root);
        return result.second;

        
    }

    //  Return height of its (sub) tree
    std::pair<int, bool> dfs(TreeNode * root){
        if(!root) return {0, true};

        auto [left_height, left_balanced] = dfs(root->left);
        auto [right_height, right_balanced] = dfs(root->right);




        bool balanced = false;
        if(left_balanced && right_balanced && std::abs(left_height-right_height) <= 1){
            balanced =  true;
        }

        return {std::max(left_height, right_height) + 1, balanced};





    }
};
