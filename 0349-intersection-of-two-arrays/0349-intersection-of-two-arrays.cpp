class Solution {
 
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    nums2[j]=-1;
                    break;
                }
                else{
                    continue;
                }
            }
        }
        vector<int>op;
        map<int, int> m;
        for(int i=0;i<ans.size();i++){
            m[ans[i]]++;
        }
        for(auto it:m){
            op.push_back(it.first);
        }
        return op;
    
      

        
    }
};