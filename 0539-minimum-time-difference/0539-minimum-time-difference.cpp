class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        vector<string> time;

        for (int i = 0; i < timePoints.size(); i++) {
            int hrs = stoi(timePoints[i].substr(0, 2));
            int mins = stoi(timePoints[i].substr(3, 2));
            minutes.push_back(hrs * 60 + mins);
        }
        sort(minutes.begin(), minutes.end());
        int minDiff = INT_MAX;
        int n = minutes.size();
        for (int i = 1; i < n; i++) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }
        minDiff = min(minDiff, 1440 - minutes[n-1] + minutes[0]);
        return minDiff;
    }
};