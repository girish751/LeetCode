class Solution {
    bool check(vector<int>&nums,int sum,int n){
        vector<vector<bool>> ans(n+1, vector<bool>(sum+1, false));
        for(int i=0;i<=n;i++){
            ans[i][0]=true;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    ans[i][j]=ans[i-1][j-nums[i-1]]||ans[i-1][j];

                }
                else{
                    ans[i][j]=ans[i-1][j];
                }
            }
        }
           return ans[n][sum];
        
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int x=sum/2;
        if(sum%2==0){
            if(check(nums,x,n)){
                return true;
            
            }
            else{
                return false;
            }
        }
            return false;
        
    }
};