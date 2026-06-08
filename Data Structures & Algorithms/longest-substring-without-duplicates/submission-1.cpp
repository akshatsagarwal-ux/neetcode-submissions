class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        if(len == 0){
            return 0;
        }
        if(len == 1){
            return 1;
        }
        unordered_map<char,int>m;
        int left = 0, right = 0;
        int maxlen = 0, currlen = 0;

        while(left != len && right != len){
            if(m.find(s[right]) == m.end()){
                m[s[right]]++;
                currlen++;
                maxlen = max(maxlen,currlen);
                right++;
            }
            else{
                m[s[left]]--;
                if(m[s[left]] == 0){
                    m.erase(s[left]);
                }
                left++;
                currlen--;
            }
        }
        return max(maxlen, currlen);
    }
};
