class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
        int pos = m+n-1;
        m--;
        n--;
        
        while(m >= 0 && n >= 0){
            if(nums1[m] >= nums2[n]){
                nums1[pos] = nums1[m];
                nums1[m--] = 0;
            }
            else{
                nums1[pos] = nums2[n--];   
            }
            pos--;
        }
        
        while(n >= 0){
            nums1[pos--] = nums2[n--];
        }
    }   

};