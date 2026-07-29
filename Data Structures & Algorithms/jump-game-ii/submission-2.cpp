class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        int moves = 0, j = 0, curr = n-1;
        while(curr != 0){
            for(int i = 0; i < n; i++){
                if(nums[i] >= n-1-i-j){
                    j += n-1-i-j;
                    curr = i;
                    moves++;
                    break;
                }
            }
        }
        return moves;
    }
};
