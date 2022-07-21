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
    map<int,int> mp;
    int mx = -1;
    
    int dfs(TreeNode* node){
        if(node == NULL) return 0;
        int lft = dfs(node -> left);
        int rgt = dfs(node -> right);
        
        int sum = node -> val + (lft + rgt);
        
        mx = max(mx,++mp[sum]);
        
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> v;
        int x = dfs(root);
        
        for(auto it: mp){
            if(it.second == mx) v.push_back(it.first);
        }
        
        return v;
    }
};