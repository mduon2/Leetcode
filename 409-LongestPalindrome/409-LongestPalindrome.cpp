// Last updated: 13/01/2026, 01:51:00
class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> letters;
        for (int i = 0; i < s.length(); i++) {
            if (letters.find(s[i]) == letters.end()) {
                letters.insert({s[i], 1});
            } else {
                letters.at(s[i])++;
            }
        }

        bool containsOdd = false;
        int length = 0;

        for (auto freq : letters) {
            if (freq.second % 2 == 0) {
                length += freq.second;
            } else {
                length += freq.second - 1;
                containsOdd = true;
            }
        }
        if (containsOdd) {
            length++;
        }
        return length;
    }
};