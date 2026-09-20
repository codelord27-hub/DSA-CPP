class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i< s.size(); i++){
            int value = s[i] - 'a' + 1;
            int reverse = 27 - value;
            int solve = reverse * (i+1);
            sum = sum + solve;
        }
        return sum;
    }
};