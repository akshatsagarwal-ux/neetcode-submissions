class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1){
            return nums.size();
        }
        set<int>s(nums.begin(),nums.end());
        int count = 1,maxcount = 1;
        for(const auto& x : s){
            if(s.find(x-1) != s.end()){
                continue;
            }
            while(s.find(x+count) != s.end()){
                count++;
            }
            maxcount = max(maxcount,count);
            count = 1;
        }
        return maxcount;
    }
};
