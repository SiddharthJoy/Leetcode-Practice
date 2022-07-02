class Solution {
    int row[201],col[201];
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    row[i]++;
                    col[j]++;
                }
                cout << matrix[i][j];
            }
            cout << endl;
        }
    
        
         for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                if(row[i] > 0 || col[j] > 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        
    }
};