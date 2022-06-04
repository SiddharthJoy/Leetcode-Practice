class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v;
        
        for(int i = 0;i<nums.size();i++){
            for(int j = i + 1;j < nums.size(); j++){
                if(target - nums[i] == nums[j]){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
            if(v.size() > 0) break;
        }
        
        return v;
    }
};