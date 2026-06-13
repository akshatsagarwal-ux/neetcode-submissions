class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size() - 1;
        while(left <= right){
            int mid = (left+right)/2;
            if(matrix[mid].back() < target){
                left = mid+1;
            }
            else if(matrix[mid].back() > target){
                right = mid-1;
            }
            else{
                return true;
            }
        }
         if (left == matrix.size()) {
            return false;
        }
        int l = 0, r = matrix[left].size()-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(matrix[left][mid] < target){
                l = mid+1;
            }
            else if(matrix[left][mid] > target){
                r = mid-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
