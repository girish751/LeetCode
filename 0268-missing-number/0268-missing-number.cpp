class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==cnt){
                cnt++;
                continue;
            }
            else{
                break;
            }

        }
        return cnt;
   
    }
};