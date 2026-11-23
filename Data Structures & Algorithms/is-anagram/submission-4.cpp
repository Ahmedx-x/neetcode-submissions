class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char, int> mps, mpt;
        for (char c:s)
            mps[c]++;
        for (char c:t)
            mpt[c]++;
        return mps == mpt;
    }
};
