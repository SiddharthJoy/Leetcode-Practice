class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,mx = -10002;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mx = max(mx,nums[i]);
            if(sum + nums[i] >= 0) sum += nums[i],mx = max(mx,sum);
            else sum = 0;
        }
        
        return mx;
    }
};