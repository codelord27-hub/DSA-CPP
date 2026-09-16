class Solution {
public:
//function
    int maxArea(vector<int>& height) {
        int n = height.size();
        //variable;
        int i = 0;
        int j = n-1;
        int maxarea = 0;
        //calculate height;
        while (i <= j){
            int containerheight = min(height[i], height[j]);

            int width = j - i;
            int area = containerheight * width;
            maxarea = max(maxarea, area);

            if (height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};