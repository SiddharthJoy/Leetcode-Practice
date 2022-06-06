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
    
    void build(vector<int> v,int beg,int en,TreeNode *node){
        
        int mx = -1;
        int idx;
        
        for(int i = beg; i < en; i++){
            if(mx < v[i]){
                mx = v[i];
                idx = i;
            }
        }
        
        node -> val = mx;
       
        TreeNode *lft = new TreeNode(0);
        TreeNode *rgt = new TreeNode(0);
        
        node -> left = lft;
        node -> right = rgt;
        
        if(beg == idx) node -> left = NULL;
        else build(v,beg,idx,lft);
        
        if(idx + 1 == en) node -> right = NULL;
        else build(v,idx + 1,en,rgt);
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode *root = new TreeNode(0);
       
        build(nums,0,nums.size(),root);
        
        return root;
    }
};