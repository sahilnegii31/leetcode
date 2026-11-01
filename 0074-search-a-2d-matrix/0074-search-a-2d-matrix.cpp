class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int i = 0, r = rows - 1;
        int mid;

        while (i <= r) {
            mid = i + (r - i) / 2;

            if (matrix[mid][0] <= target &&
                matrix[mid][cols - 1] >= target) {
                break;
            }

            if (matrix[mid][0] > target) {
                r = mid - 1;
            } 
            else {
                i = mid + 1;
            }
        }

        if (i > r) return false;

        int st = 0, end = cols - 1;
        int row = mid;

        while (st <= end) {
            mid = st + (end - st) / 2;

            if (matrix[row][mid] == target) {
                return true;
            }
            else if (matrix[row][mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};