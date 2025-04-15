class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char c:s){
            if(isalnum(c)){
                t += tolower(c); 
            }
        }
            int n=t.length();
            int i=0;
            int j=n-1;
            while(i<j){
                if(t[i]==t[j]){
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
        return true;
        
    }
};