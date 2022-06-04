class Solution {
public:
    vector<string> v;
    int N;
    
    void generate(int has, int now, string s){
        if(has == 0 && now == 0){
            v.push_back(s);
            return;
        }
        if(has == 0) return;
        
        if(now - 1 >= 0) generate(has - 1,now - 1, s + ')');
        if(now + 1 <= N) generate(has - 1,now + 1, s + '(');
    }
        
    vector<string> generateParenthesis(int n) {
        N = n;
        generate(2*n,0,"");
        return v;
    }
};