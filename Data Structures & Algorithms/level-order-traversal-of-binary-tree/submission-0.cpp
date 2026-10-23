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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        std::queue<TreeNode*> q{};
        q.push(root);
        std::vector<std::vector<int>> res{};

        while(!q.empty()){
            int level_size = q.size();
            std::vector<int> temp_result = {};
            for(int i = 0; i < level_size; i++){
                TreeNode *front = q.front();
                q.pop();
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
                temp_result.push_back(front->val);
            }
            res.push_back(temp_result);
        }
        return res;
    }
};
