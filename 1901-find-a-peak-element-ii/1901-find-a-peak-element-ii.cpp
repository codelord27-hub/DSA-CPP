class Solution {
public:
int findMaxElement(vector<vector<int>>& mat, int rows, int cols, int j){
    int maxi = INT_MIN;
    int index = -1;
    for (int i = 0; i<rows; i++){
        if(mat[i][j] > maxi){
            maxi = mat[i][j];
            index = i;
        }
    }
    return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int rows = mat.size();
        int cols = mat[0].size();


        int s = 0;
        int e = cols-1;

        while (s<=e){
            int mid = (s+e)/2;
            int maxRowIndex = findMaxElement(mat, rows, cols, mid);
            int current = mat[maxRowIndex][mid];

            int left = INT_MIN;
            if(mid - 1 >= 0){
                left = mat[maxRowIndex][mid-1];
            }
            int right = INT_MIN;
            if (mid + 1 < cols){
                right = mat[maxRowIndex][mid+1];
            }

            if (current > left && current > right){
                return {maxRowIndex, mid};
            }
            else if(current < left){
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return {};
    }
};