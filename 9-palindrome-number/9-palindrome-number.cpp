class Solution {
public:
    bool isPalindrome(int x) {
        string s = "";
        
        if(x < 0) return false;
        
        while(x){
            s += ('0'+ x % 10);
            x /= 10;
        }
        
        int n = s.size();
        
        for(int i = 0,j = n-1;i < n;i++,j--){
            if(s[i] != s[j]){
                return false;
            }
        }
        
        return true;
    }
};