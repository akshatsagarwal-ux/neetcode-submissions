class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-2; i++){
            int j = i+1, k = n-1;
            while(j < k){
                if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }
                else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }
                else{
                    vector<int>row{nums[i],nums[j],nums[k]};
                    ans.insert(row);
                    j++;
                }
            }
        }
        vector<vector<int>>fin(ans.begin(),ans.end());
        return fin;
    }
};
