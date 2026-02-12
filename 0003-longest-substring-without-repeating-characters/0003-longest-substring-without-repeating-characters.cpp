class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int L = 0, R = 0;
        int maxCur = 0;
        int MAX = 0;
        vector<int> count(500, 0);
        while(R < s.size()) {
            count[s[R] + 100]++;
            if(count[s[R] + 100] < 2)  {
                maxCur++;
                if(MAX < maxCur) MAX = maxCur;
                R++;
                continue;
            }
                fill(count.begin(), count.end(), 0);
                L++;
                R = L;
                maxCur = 0;
                
        }
    return MAX;
    }
};