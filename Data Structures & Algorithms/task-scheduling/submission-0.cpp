class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char c : tasks) {
            freq[c - 'A']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());

        int max_freq = freq[0];
        int m = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == max_freq) {
                m++;
            } else {
                break; 
            }
        }
        int frame_area = (max_freq - 1) * (n + 1) + m;
        return max((int)tasks.size(), frame_area);
    }
};
