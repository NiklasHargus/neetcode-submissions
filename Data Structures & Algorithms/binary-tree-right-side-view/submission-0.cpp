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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        std::vector<int> res{};
        std::queue<TreeNode *> q{};
        q.push(root);

        while(!q.empty()){
            int level_size = q.size();

            for(int i = 0; i < level_size; i++){
                auto front = q.front();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                if (i == (level_size - 1)) res.push_back(front->val);
                q.pop();
            }
        }
        return res;
    }
};
