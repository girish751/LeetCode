class Solution {
public:
int helper(vector<int>nums,int mid){
  int count=1;
  int sum=0;
  for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=mid){
            sum=sum+nums[i];
        }
        else{
            count++;
            sum=nums[i];
        }
  }
  return count;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end()),high,mid;
        for(int i=0;i<nums.size();i++){
            high+=nums[i];
        }
        while(low<=high){
            mid=(low+high)/2;
            int res=helper(nums,mid);
            if(res>k){
              low=mid+1;
            }else{
                    high=mid-1;
            }
        }
        return low;
        
    }
};