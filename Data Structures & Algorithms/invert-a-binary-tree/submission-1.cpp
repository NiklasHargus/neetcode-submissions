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

    TreeNode* invertTree(TreeNode* root) {
        // DFS
        if(!root) return nullptr;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;

        // BFS
        if(!root) return nullptr;
        std::queue<TreeNode *> q{};
        q.push(root);
        while(!q.empty()){
            auto next = q.front();
            q.pop();
            swap(next->left, next->right);
            if(next->left) q.push(next->left);
            if(next->right) q.push(next->right);
        }
        return root;
    }
};
