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
    bool dfs(TreeNode *node,TreeNode* prev,bool lft){
        bool f = node -> val;
        if(node -> left) f |= dfs(node -> left,node,1);
        if(node -> right) f |= dfs(node -> right,node,0);
        if(!f && prev){
           if(lft) prev -> left = NULL;
            else prev -> right = NULL;
        } 
        return f;
    }
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root){
            if(!dfs(root,NULL,-1)){
                root = NULL;
            }
        }
        
        return root;
    }
};