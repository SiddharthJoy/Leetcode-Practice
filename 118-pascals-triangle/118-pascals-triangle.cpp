class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int a[numRows + 2][numRows + 2];
        vector<vector<int>> ans;
        vector<int> v;
        
        for(int i = 0;i<=numRows;i++){
            for(int j = 0;j <= numRows; j++){
                a[i][j] = 0;
            }
        }
        
        a[1][0] = a[1][2] = 0;
        a[1][1] = 1;
        v.push_back(1);
        ans.push_back(v);
        v.clear();
        
        for(int i = 2;i<=numRows;i++){
            for(int j = 1;j<=i+1;j++){
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
            
            for(int j = 1;j<=i;j++) v.push_back(a[i][j]);
            ans.push_back(v);
            v.clear();
        }
        
        return ans;
    }
};