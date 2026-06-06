class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(nums.size() == 0){
            return 0;
        }
        int max = 1, count = 1;
        for(auto it = s.begin(); it!=s.end(); it++){
            auto temp = s.upper_bound(*it);
            if(temp == s.end()){
                if(count > max){
                    max = count;
                }
                count = 1;
            }
            else{
                if(*temp - *it == 1){
                    count++;
                }
                else{
                    if(count > max){
                        max = count;
                    }
                    count = 1;
                }
            }
        }
        return max;
    }
};
