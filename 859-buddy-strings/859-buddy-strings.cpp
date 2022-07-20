class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int cnt = 0;
        int n = s.size();
        int nn = goal.size();
        
        if(n != nn) return false;
        
        if(s == goal){
            int characters[26];
            for(int i = 0;i<26;i++) characters[i] = 0;
            
            for(int i = 0;i<n;i++){
                characters[s[i]-'a']++;
                if(characters[s[i]-'a'] > 1) return true;
            }
            
            return false;
        }
        
        
        int idx,idxx;
        idx = idxx = -1;
        for(int i = 0;i<n;i++){
            if(s[i] != goal[i]){
                if(idx == -1) idx = i;
                else if(idxx == -1) idxx = i;
                else return false;
            }
        }
        
        if(idxx > 0 && s[idx] == goal[idxx] && s[idxx] == goal[idx]) return true;
        
        return false;
    }
};