class Solution {
public:
int solve(vector<vector<int>>& triangle, int rows, int cols, vector<vector<int>>& dp){
    if (rows == triangle.size() - 1 ){
        return triangle[rows][cols];
    }
    if (dp[rows][cols]!= INT_MAX){
        return dp[rows][cols];
    }
    int down = triangle[rows][cols] + solve(triangle, rows+1, cols, dp);
    int plus = triangle[rows][cols] + solve(triangle, rows+1, cols+1, dp);

    dp[rows][cols]= min(down, plus);
    return dp[rows][cols];
}
     int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        return solve(triangle, 0, 0, dp);
    }
};