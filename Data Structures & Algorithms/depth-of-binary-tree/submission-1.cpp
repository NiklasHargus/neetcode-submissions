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

        int maxDepth = 0;
        std::queue<TreeNode*> q{};
        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();

            for(int i = 0; i < levelSize; i++){
                TreeNode *current = q.front();
                q.pop();

                if (current->left)q.push(current->left);
                if (current->right)q.push(current->right);



            }
            maxDepth++;
        }
        return maxDepth;



    }
};
