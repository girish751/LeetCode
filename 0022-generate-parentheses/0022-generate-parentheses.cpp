class Solution {
    void generatepar(int n,string &temp,vector<string>&ans,int left,int right){
        if(left+right==2*n){
            ans.push_back(temp);
            return;

        }
        //left par
        if(left<n){
            temp.push_back('(');
            generatepar(n,temp,ans,left+1,right);
            temp.pop_back();
        }
        //right par
        
        if(right<left){
            temp.push_back(')');
            generatepar(n,temp,ans,left,right+1);
            temp.pop_back();
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        string temp="";
        vector<string>ans;
        generatepar(n,temp,ans,0,0);
        return ans;
        
    }
};