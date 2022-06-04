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
    vector<int> v[2002];
    
    void dfs(TreeNode* node,int level){
        if(node == NULL) return;
        v[level].push_back(node -> val);
        dfs(node -> left,level + 1);
        dfs(node -> right,level + 1);
    }
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root,0); 
        
        vector<int> vv;
        vector<vector<int> > vvv;
        
        for(auto it: v){
            if(it.size() == 0) break;
            vvv.push_back(it);
        }
        
        return vvv;
    }
};