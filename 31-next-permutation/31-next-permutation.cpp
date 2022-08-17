class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),idx = -1;
        
        for(int i = n-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                idx = i-1;
                break;
            }
        }
        
        if(idx == -1){
            for(int i = 0;i<n/2;i++) swap(nums[i],nums[n-i-1]);
            return;
        }
        
        
        nums.push_back(-1);

        for(int i = idx + 1;i<n+1;i++){
            if(nums[idx] >= nums[i]){
                swap(nums[idx],nums[i-1]);
                break;
            }
        }
        
        nums.pop_back();
        
        sort(nums.begin()+idx+1,nums.end());
    }
};