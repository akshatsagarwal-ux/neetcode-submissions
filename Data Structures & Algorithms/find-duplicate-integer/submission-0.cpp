class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(const auto& x : nums){
            if(s.find(x) != s.end()){
                return x;
            }
            s.insert(x);
        }
    }
};
