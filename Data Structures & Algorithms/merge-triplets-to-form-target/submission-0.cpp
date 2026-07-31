class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int ta = target[0];
        int tb = target[1];
        int tc = target[2];
        bool fa = false, fb = false, fc = false;
        for(int i = 0 ; i < triplets.size(); i++){
            int ca = triplets[i][0];
            int cb = triplets[i][1];
            int cc = triplets[i][2];

            if(ca <= ta && cb <= tb && cc <= tc){
                if(ca == ta){
                    fa = true;
                }
                if(cb == tb){
                    fb = true;
                }
                if(cc == tc){
                    fc = true;
                }
            }
        }
        if(fa && fb && fc){
            return true;
        }
        else return false;
    }
};
