class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int i=0;
        reverse(s.begin(),s.end());
        while(s[i]==' '){
            i++;
        }
        while(i<s.length() && s[i]!=' '){
            len++;
            i++;
        }
        return len;
        
    }
};