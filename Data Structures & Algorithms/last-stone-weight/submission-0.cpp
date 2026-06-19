class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while (pq.size() > 1) {
            int big = pq.top();
            pq.pop();
            int small = pq.top();
            pq.pop();
            if (big == small) {
                continue;
            } else {
                pq.push(big - small);
            }
        }
        if (pq.size() == 0) {
            return 0;
        } else {
            return pq.top();
        }
    }
};
