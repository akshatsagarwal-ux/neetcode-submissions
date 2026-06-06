class Solution {
public:
    struct myCmp{
        bool operator()(pair<int,int>p,pair<int,int>q){
            if(p.second==q.second){
                return p.first>q.first;
            }
            return p.second<q.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(const int& x : nums){
            m[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,myCmp>pq(m.begin(),m.end());
        for(int i = 0; i < k; i++){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};
