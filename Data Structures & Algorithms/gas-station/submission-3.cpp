class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = -1;
        for(int si = 0; si < gas.size(); si++){
            int store = 0;
            if(gas[si] - cost[si] >= 0){
                //cout << si << "\n";
                store += gas[si] - cost[si];
                int j;
                for(j = si+1; j != si; j++){
                    if(j == gas.size()){
                        j = 0;
                    }
                    if(j == si){
                        ans = si;
                        break;
                    }
                    int diff = gas[j] - cost[j];
                    if(diff > 0){
                        store += diff;
                    }
                    else{
                        if(diff + store < 0){
                            break;
                        }
                        else {
                            store += diff;
                        }
                    }
                }
                if(j == si){
                    ans = si;
                    break;
                }
            }
            else{
                //cout << "not possible " << si << "\n";
            }
        }
        return ans;
    }
};
