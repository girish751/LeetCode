class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        combine(ans,temp,n,k,1);
        return ans;
    }
    void combine(vector<vector<int>> &ans,vector<int>&temp,int n,int k,int i){
        if(k==0){
            ans.push_back(temp);
            return; 
        }
        for(;i<=n;i++){
            temp.push_back(i);
            combine(ans,temp,n,k-1,i+1);
            temp.pop_back();
        }
    }
};