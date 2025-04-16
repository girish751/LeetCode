class Solution {
public:
    char findTheDifference(string s, string t) {

        //{'a':1, 'b':1, 'c':1, 'd':1} in mp for s
        //Then when checking t, all counts are decreased:

// a → 0

// b → 0

// c → 0

// d → 0

// e → -1 → This triggers the return, so it returns 'e'.


          unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        for (char c : t) {
            mp[c]--;
            if (mp[c] < 0) {
                return c;
            }
        }
        return ' ';
    }
};
        
        
    