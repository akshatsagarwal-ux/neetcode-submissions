class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax = 0, rightmax = 0;
        int left = 0, right = n-1;
        int total = 0;
        while(left < right){
            leftmax = max(height[left], leftmax);
            rightmax = max(height[right], rightmax);

            if(leftmax < rightmax){
                total += leftmax-height[left];
                left++;
            }
            else{
                total += rightmax-height[right];
                right--;
            }
        }
        return total;
    }
};
