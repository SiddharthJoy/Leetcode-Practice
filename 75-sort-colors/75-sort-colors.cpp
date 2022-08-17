class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int lo = 0,mid = 0,hi = n-1;
        
        for(int i = 0;i<n;i++){
            if(hi < mid) break;
            if(nums[mid] == 0){
                swap(nums[mid],nums[lo]);
                lo++;
                mid++;
            }
            else if(nums[mid] == 1) mid++;
            else{
                swap(nums[mid],nums[hi]);
                hi--;
            }
        }
        
    }
};