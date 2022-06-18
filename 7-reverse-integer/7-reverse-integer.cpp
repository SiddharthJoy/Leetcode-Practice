class Solution {
public:
    int reverse(int x) {
        string s = "";
        long long xx = x;
        
        while(xx){
            s += (xx%10) + '0';
            xx /= 10;
        }
        
        long long ten = 1;
        for(int i = 1;i<s.size();i++){
            ten *= 10;
        }
        
        long long ans = 0;
        for(int i = 0;i<s.size();i++){
            ans += (s[i] - '0') * ten;
            ten /= 10;
        }
        
        if(ans >= 2147483648 || ans < -2147483648) ans = 0;
        
        return ans;
    }
};