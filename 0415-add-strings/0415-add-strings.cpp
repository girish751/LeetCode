class Solution {
public:
    string addStrings(string num1, string num2) {
        string s1,s2;
        int sz1=num1.size();
        int sz2=num2.size();
        int sz=max(sz1,sz2);
        for(int i=1;i<=sz-sz1;i++){
            s1+='0';
        }
        for(int i=1;i<=sz-sz2;i++){
            s2+='0';
        }
        s1+=num1;
        s2+=num2;
        string s;
        int carry=0;
        for(int i=sz-1;i>=0;i--){
            int sum=(s1[i]-'0')+(s2[i]-'0');
            carry+=sum;
            s+=carry%10+'0';
            carry/=10;
        }
        if(carry>0){
            s+=carry+'0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};