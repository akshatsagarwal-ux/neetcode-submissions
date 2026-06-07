class Solution {
   public:
    bool isAlphaNum(char a) {
        if (a >= 'a' && a <= 'z') {
            return true;
        } else if (a >= 'A' && a <= 'Z') {
            return true;
        } else if (a >= '0' && a <= '9') {
            return true;
        } else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        if(s.length() == 1){
            return true;
        }
        auto fwd = s.begin(), bck = s.end() - 1;
        while (fwd <= bck) {
            if (!isAlphaNum(*fwd) || !isAlphaNum(*bck)) {
                while(fwd < bck && !isAlphaNum(*fwd)){
                    fwd++;
                }
                while(fwd < bck && !isAlphaNum(*bck)){
                    bck--;
                }
            } 
            if(*fwd >= 'A' && *fwd <= 'Z'){
                *fwd = *fwd-'A'+'a';
            }
            if(*bck >= 'A' && *bck <= 'Z'){
                *bck = *bck-'A'+'a';
            }
            if(*fwd != *bck){
                return false;
            }
            fwd++;
            bck--;
        }
        return true;
    }
};
