struct myCmp{
    bool operator()(vector<int>v, vector<int>b){
        return ((v[0]*v[0] + v[1]*v[1]) < (b[0]*b[0] + b[1]*b[1]));
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, myCmp>pq;
        for(int i = 0; i < k; i++){
            pq.push(points[i]);
        }
        for(int i = k; i < points.size(); i++){
            pq.push(points[i]);
            pq.pop();
        }
        vector<vector<int>>ans;
        for(int i = 0; i < k; i++){
            vector<int>row = pq.top();
            ans.push_back(row);
            pq.pop();
        }
        return ans;
    }
};
