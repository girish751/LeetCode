class Solution {
public:
    string largestOddNumber(string num) {
        string str="";
         int i=num.size()-1;
        // int x=stoi(num);
        if((num[i]-'0')%2!=0){
            return num;
        }
        else{
            while(i>=0){
                if((num[i]-'0')%2==0){
                    i--;
                }
              else{
                break;
              }
            }
        }
        return num.substr(0,i+1);
       
    
    }
};