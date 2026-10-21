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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        std::queue<TreeNode*> q{};
        q.push(root);
        int level = 0;

        while(!q.empty()){
            int level_size = q.size();
            for(int i = 0; i < level_size; i++){
                auto next = q.front();
                q.pop();
                if(next->left) q.push(next->left);
                if(next->right) q.push(next->right);
            }
            level++;
        }
        return level;
    }
};
