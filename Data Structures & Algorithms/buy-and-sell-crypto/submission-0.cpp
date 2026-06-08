class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int left = 0, right = 0, maxdif = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[left]){
                right = i;
            }
            else if(prices[i] < prices[left]){
                left = i;
            }
            if(left<right){
                maxdif = max(maxdif,prices[right] - prices[left]);
            }
        }
        return maxdif;
    }
};
