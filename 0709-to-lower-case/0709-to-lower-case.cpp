class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(char c:s){
            ans+=tolower(c);
        }
        return ans;
        
    }
};