class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //test sync
        if(nums.size() == 0 || nums.size() == 1){
            return false;
        }
        sort(nums.begin(), nums.end());
        for(size_t i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};