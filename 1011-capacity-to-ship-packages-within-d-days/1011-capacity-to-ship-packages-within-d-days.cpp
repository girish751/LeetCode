class Solution {
    int sum(vector<int>&weights){
        int i=0;
        int ans=0;
        for(int i=0;i<weights.size();i++){
            ans+=weights[i];
        }
        return ans;

    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(), weights.end());
        int end=sum(weights);
      int x=end;
        while(start<=end){
              int ans=0;
              int y=1;
            int mid=start+(end-start)/2;
            for(int i=0;i<weights.size();i++){
             
                if(ans+weights[i]>mid){
                    y++;
                    ans=0;
                }
                ans+=weights[i];
            }
            if(y<=days){
                x=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return x;
        
    }
};