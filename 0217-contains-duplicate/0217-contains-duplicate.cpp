class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            arr.push_back(it.second);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=2){
                return true;
            }
        }
        return false;

    }
};