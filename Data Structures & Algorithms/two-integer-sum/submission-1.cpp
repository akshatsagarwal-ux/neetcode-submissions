class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); ++i) {
            // Inner loop to check all subsequent elements
            for (size_t j = i + 1; j < nums.size(); ++j) {
                // If the sum matches our target, return the indices
                if (nums[i] + nums[j] == target) {
                    return {(int)i, (int)j};
                }
            }
        }
        return {};
    }
};
