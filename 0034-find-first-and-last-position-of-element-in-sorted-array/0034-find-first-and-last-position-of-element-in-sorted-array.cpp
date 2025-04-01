class Solution {
    void searchfirst(vector<int> &nums,int &target,vector<int>&ans){
        int start=0;
        int end=nums.size()-1;
        int t=-1;
        while(start<=end){
            int mid=(start+(end-start)/2);
            if(nums[mid]==target){
                t=mid;
                end=mid-1;

            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(t==-1){
            ans.push_back(-1);
        }
        else{
        ans.push_back(t);
        }
    }
        void searchsecond(vector<int>&nums,int &target,vector<int> &ans){
        int start=0;
        int end=nums.size()-1;
        int t;
        while(start<=end){
            int mid=(start+(end-start)/2);
            if(nums[mid]==target){
              t=mid;
                start=mid+1;

            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    
      if(t==-1){
        ans.push_back(-1);
      }
      else{
        ans.push_back(t);
      }
   

    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans;
    searchfirst(nums,target,ans);
    searchsecond(nums,target,ans);
    return ans;

        
    }
};