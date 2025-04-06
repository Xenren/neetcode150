
class Solution {
public:
    bool isAnagram(string s, string t) {
        // cannot be anagrams if lengths aren't equal
        int lenS { s.size() };
        int lenT { t.size() };
        if (lenS != lenT) {
            return false;
        }

        // create freq maps
        std::map<char, int> freqs {}; 
        std::map<char, int> freqt {};
        for (int i = 0; i < lenS; ++i) 
        {
            freqs[s[i]]++;
            freqt[t[i]]++;
        }
        // return comparison of freq maps
        return freqs == freqt;
    }
};
