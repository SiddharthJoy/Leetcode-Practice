class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > v;
        vector<int> vv;
        
        sort(nums.begin(),nums.end());
        
        for(auto it: nums) vv.push_back(it);
        v.push_back(vv);
        vv.clear();
       
        while(next_permutation(nums.begin(),nums.end())){
            for(auto it: nums) vv.push_back(it);
            v.push_back(vv);
            vv.clear();
        }
        
        return v;
    }
};