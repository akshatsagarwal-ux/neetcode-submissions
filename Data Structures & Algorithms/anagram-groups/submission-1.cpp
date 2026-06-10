class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int>m;
        for(const char &x : s){
            m[x]++;
        }
        for(const char &y : t){
            m[y]--;
            if(m[y] == 0){
                m.erase(y);
            }
        }
        if(m.empty()){
            return true;
        }
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        bool isIn = false;
        for(int i = 0; i < strs.size(); i++){
            isIn = false;
            for(int j = 0; j < ans.size(); j++){
                if(isAnagram(strs[i], ans[j][0])){
                    ans[j].push_back(strs[i]);
                    isIn = true;
                    break;
                }
            }
            if(isIn == false){
                vector<string>row{strs[i]};
                ans.push_back(row);
            }
        }
        return ans;
    }
};
