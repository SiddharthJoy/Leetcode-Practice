class Solution {
public:
    vector<int> minOperations(string boxes) {
        int total = 0,balls = 0,tot = 0,ball;
        int n = boxes.size();
        for(int i = 0;i<n;i++){
            if(boxes[i] == '1') total += i,balls++,tot += n-1-i;
        }
        
        ball = balls;

        vector<int> ans(n);
        
        for(int i = 0;i<n;i++){
            ans[i] = total;
            if(boxes[i] == '1') balls--;
            total -= balls;
        }
        
        for(int i = n-1;i>=0;i--){
            ans[i] += tot;
            if(boxes[i] == '1') ball--;
            tot -= ball;
        }
        
        return ans;
    }
};