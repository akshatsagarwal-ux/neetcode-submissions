class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int>m;
        for(int i = 0; i < hand.size(); i++){
            m[hand[i]]++;
        }
        while (!m.empty())
        {
            int start = m.begin()->first;

            for (int x = start; x < start + groupSize; x++)
            {
                auto it = m.find(x);

                if (it == m.end())
                    return false;

                it->second--;

                if (it->second == 0)
                    m.erase(it);
            }
        }
        return true;
    }
};
