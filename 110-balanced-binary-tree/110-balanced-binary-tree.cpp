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
    bool ans = true;
    int dfs(TreeNode* node)
    {
        if(node == NULL || (node -> left == NULL && node->right == NULL)){
            return 0;
        }
        
        int x,y;
        x = y = 0;
        
        if(node -> left) x = dfs(node -> left) + 1;
        if(node -> right) y = dfs(node -> right) + 1;
        
        if(abs(x-y) > 1) ans = false;
        
        return max(x,y);
    }
    
public:
    bool isBalanced(TreeNode* root) {
        int res = dfs(root);
        return ans;
    }
};