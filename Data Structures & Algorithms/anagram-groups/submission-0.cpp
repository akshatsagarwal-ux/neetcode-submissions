class Solution {
public:
    bool isGroupAnagram(string& s, string& t){
        int arr[26] = {0};
        for(int i = 0; i < s.length(); i++){
            arr[s[i]-'a']++;
        }
        for(int i = 0; i < t.length(); i++){
            arr[t[i]-'a']--;
        }
        for(auto &x : arr){
            if(x != 0){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool>isVisited(strs.size(), false);
        for(int i = 0; i < strs.size(); i++){
            if(isVisited[i] == true){
                continue;
            }
            vector <string> row;
            row.push_back(strs[i]);
            for(int j = i+1; j < strs.size(); j++){
                if(isVisited[j] == true){
                    continue;
                }
                if(isGroupAnagram(strs[i], strs[j])){
                    row.push_back(strs[j]);
                    isVisited[j] = true;
                    continue;
                }
            }
            isVisited[i] = true;
            ans.push_back(row);
        }
        return ans;
    }
};
