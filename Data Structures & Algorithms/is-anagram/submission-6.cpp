class Solution {
public:
    bool isAnagram(string s, string t) {
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
};
