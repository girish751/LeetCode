class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=needle.length();
        for(int i =0;i<haystack.length();i++){
            if(haystack.substr(i,len)==needle)return i;
        }
        return -1;
    }
};