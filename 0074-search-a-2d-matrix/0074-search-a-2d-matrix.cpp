class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int total = rows * cols;
        int s = 0;
        int e = total - 1;

        while (s<=e){
            int mid = (s+e)/2;
            int rowIndex = mid/cols;
            int colIndex = mid % cols;

            if (matrix[rowIndex][colIndex] == target){
                return true;
            }
            else if (matrix[rowIndex][colIndex] > target ){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
};