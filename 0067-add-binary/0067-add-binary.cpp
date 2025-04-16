class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        string ans="";
        int carry=0;
        while(i>=0|| j>=0){
            int count=0;
            if(i>=0 && a[i]=='1'){
                count++;
            }
            if(j>=0 && b[j]=='1'){
                count++;
            }
            if(count+carry==0){
                ans+='0';
                carry=0;

            }
            else if(count+carry==1){
                ans+='1';
                carry=0;
            }
            else if(count+carry==2){
                ans+='0';
                carry=1;
            }
            else if(count+carry==3){
                ans+='1';
                carry=1;
            }
            i--;
            j--;
        }
        if(carry==1){
            ans+=to_string(carry);
        }
        reverse(ans.begin(),ans.end());
        if(ans.length()==1){
            return ans;
        }
        int k=0;
        while(ans[k]=='0'){
            ans.erase(0,1);

        }
        return ans;
    }
};