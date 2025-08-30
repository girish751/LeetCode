class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>brr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                brr.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        vector<int>qwe;
        int i=0;
        int j=0;
        while(i<brr.size() && j<ans.size()){
             qwe.push_back(ans[j]);
            qwe.push_back(brr[i]);
             
              i++;
              j++;

        }
        return qwe;
    }
};