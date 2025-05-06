class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=1;
        int i=0;
        while(k>0){
            if(i<arr.size()&& arr[i]==cnt){
                i++;
            }
            else{
                k--;
            }
            if(k>0){
                cnt++;
            }
        }
        return cnt;

   
    }
};