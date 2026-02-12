class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> temp;
        int count = 0;
        for (const auto x: s) {
            if(x == 'b') temp.push('b');
            else if(!temp.empty()) {
                temp.pop();
                count++;
            }
        }
        return count;
    }
};