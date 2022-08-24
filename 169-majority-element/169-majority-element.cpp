class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el,cnt;
        cnt = 1;
        el = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(cnt == 0) el = nums[i];
            if(nums[i] == el) cnt++;
            else cnt--;
        }
        
        return el;
    }
};