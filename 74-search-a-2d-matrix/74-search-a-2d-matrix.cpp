class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int hi = n - 1, lo = 0, mid;

        while (lo <= hi) {
            mid = (lo + hi) / 2;
            if (matrix[mid][m - 1] < target) lo = mid + 1;
            else hi = mid - 1;
        }

        if (lo == n) return false;
        return binary_search(matrix[lo].begin(), matrix[lo].end(), target);

    }
};