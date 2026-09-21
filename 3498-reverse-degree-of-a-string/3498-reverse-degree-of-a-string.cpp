class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i<s.size(); i++){
            int org = s[i] - 'a' + 1;
            int rev = 27 - org;
           int solve = rev * (i+1);
            sum = sum + solve;
        }
        return sum;
    }
};