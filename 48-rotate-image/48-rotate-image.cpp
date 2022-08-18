class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

    int x = matrix.size() - 1;
    for (int i = 0; i * 2 <= matrix.size(); i++) {
        for (int j = i; j < x; j++) {
            swap(matrix[i][j], matrix[j][x]);
            swap(matrix[i][j], matrix[x][x - j + i]);
            swap(matrix[i][j], matrix[x - j + i][i]);
        }
        x--;
    }

}
};