class Solution {
public:
//  Find out if 'ba' is exist and count it
    int minimumDeletions(string s) {
        int countB = 0;
        int count = 0;
        for (const auto x: s) {
            if(x == 'b') countB++;
            else if(countB != 0) {
                countB--;
                count++;
            }
        }
        return count;
    }
};