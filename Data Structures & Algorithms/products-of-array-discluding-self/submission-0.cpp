class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int prod = 1, iszero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                iszero++;
                continue;
            }
            prod = prod*nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            if(iszero == 1){
                if(nums[i] == 0){
                    ans[i] = prod;
                }
                else ans[i] = 0;
            }
            else if(iszero > 1){
                ans[i] = 0;
            }
            else if(iszero == 0){
                ans[i] = prod/nums[i];
            }
        }
        return ans;
    }
};
