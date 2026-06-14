class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> t;
        for(int i = 0; i < position.size(); i++){
            t.push_back({position[i], speed[i]});
        }
        sort(t.rbegin(), t.rend());
        vector<double> stacki;
        for(auto p : t){
            stacki.push_back((double)(target-p.first)/p.second);
            if(stacki.size() >= 2 && stacki.back() <= stacki[stacki.size()-2]){
                stacki.pop_back();
            }

        }
        return stacki.size();
    }
};
