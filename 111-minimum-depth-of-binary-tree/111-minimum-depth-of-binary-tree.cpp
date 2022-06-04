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
    int dfs(TreeNode* node)
    {
        if(node == NULL) return 0;
        
        if(node -> left == NULL && node -> right == NULL) return 1;
        
        if(node -> left == NULL) return dfs(node -> right) + 1;
        if(node -> right == NULL) return dfs(node -> left) + 1;
        
        int x = dfs(node -> left) + 1;
        int y = dfs(node -> right) + 1;
        
        return min(x,y);
    }
public:
    int minDepth(TreeNode* root) {
        return dfs(root);
    }
};