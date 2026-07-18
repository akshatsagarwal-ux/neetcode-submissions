class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int right = 0;
        int currsum = 0, maxsum = -1001;
        while(right < nums.size()){
            currsum += nums[right];
            maxsum = max(currsum,maxsum);
            if(currsum <= 0){
                currsum = 0;
            }
            right++;
        }
        return maxsum;
    }
};
