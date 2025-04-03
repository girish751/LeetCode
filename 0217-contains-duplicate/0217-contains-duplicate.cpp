class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>=2){
                return true;
            }
        }
    
        return false;
       
    }
};