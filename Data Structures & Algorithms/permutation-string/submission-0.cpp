class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m;
        for(int i = 0; i < s1.length(); i++){
            m[s1[i]]++;
        }
        
        for(int i = 0; i < s2.length()-s1.length()+1; i++){
            if(m.find(s2[i]) == m.end()){
                continue;
            }
            else{
                unordered_map<char,int>n;
                for(int j = i; j < i+s1.length(); j++){
                    n[s2[j]]++;
                }
                if(m==n){
                    return true;
                }
            }
        }
        return false;
    }
};
