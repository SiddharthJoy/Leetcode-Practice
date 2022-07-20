class Solution {
public:
    int minPartitions(string n) {
        int mx = -1;
        int sz = n.size();
        for(int i = 0;i < sz; i++){
            mx = max(n[i] - '0',mx);
        }
        return mx;
    }
};