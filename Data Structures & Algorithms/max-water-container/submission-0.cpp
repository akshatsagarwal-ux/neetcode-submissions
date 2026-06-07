class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water = 0;
        int n = heights.size();
        int i = 0, j = n-1;
        while(i<j){
            int area = (j-i)*min(heights[i],heights[j]);
            max_water = max(max_water,area);
            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_water;
    }
};
