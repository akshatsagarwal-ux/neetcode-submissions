class Solution {
public:

    string encode(vector<string>& strs) {
        string t = "";
        for(int i = 0; i < strs.size(); i++){
            t += to_string(strs[i].length()) + "#" + strs[i];
        }
        cout << t;
        return t;
    }

    vector<string> decode(string s) {
        vector<string>t;
        int i = 0;
        while(i < s.length()){
            int j = s.find('#', i);
            int len = stoi(s.substr(i,j-i));
            i = j+1;
            t.push_back(s.substr(i,len));
            i+=len;
        }
        return t;
    }
};
