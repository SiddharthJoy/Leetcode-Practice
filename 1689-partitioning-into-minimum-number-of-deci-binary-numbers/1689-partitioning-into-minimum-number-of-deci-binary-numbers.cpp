class Solution {
public:
    int minPartitions(string n) {
        int mx = -1;
        for(int i = 0;i < n.size(); i++){
            mx = max(n[i] - '0',mx);
        }
        return mx;
    }
};