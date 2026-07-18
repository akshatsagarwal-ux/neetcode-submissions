class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = nums[0];
        int pt = 0;
        while(mx > 0 && pt != nums.size() - 1){
            pt++;
            mx--;
            mx = max(nums[pt], mx);
        }
        if(pt == nums.size() - 1){
            return true;
        }
        return false;
    }
};
