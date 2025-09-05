class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        vector<float>ans;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        int n=ans.size();
        int x=n/2;
        if(n%2==0){
            float y= (ans[x-1]+ans[x])/2;

            return(y);

        }
            return ans[x];
     
    }
};