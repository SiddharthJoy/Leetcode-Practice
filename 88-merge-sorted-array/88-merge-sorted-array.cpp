class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
        int i = m-1;
        int j = n-1;
        int pos = m+n-1;
        
        while(j >= 0 && i >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[pos] = nums1[i];
                nums1[i--] = 0;
            }
            else{
                nums1[pos] = nums2[j--];   
            }
            pos--;
        }
        
        while(j >= 0){
            nums1[pos--] = nums2[j--];
        }
    }   

};