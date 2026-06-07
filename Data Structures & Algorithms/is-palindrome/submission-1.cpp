class Solution {
public:
    bool isAlphaNum(char a){
        if(a >= 'a' && a <= 'z'){
            return true;
        }
        else if(a >= 'A' && a <= 'Z'){
            return true;
        }
        else if(a >= '0' && a <='9'){
            return true;
        }
        else{
            return false;
        }
    }
    bool isPalindrome(string s) {
        string t = "";
        for(int i = 0; i < s.length(); i++){
            if(isAlphaNum(s[i])){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    t += s[i]-'A'+'a';
                }
                else t += s[i];
            }
            else{
                continue;
            }
        }
        //cout << t <<"hi";
        auto fwd = t.begin(), bck = t.end()-1;
        while(fwd <= bck){
            if(*fwd != *bck){
                return false;
            }
            fwd++;
            bck--;
        }
        return true;
    }
};
