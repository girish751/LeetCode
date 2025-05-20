class Solution {
    int sum(vector<int>&weights){
        int ans=0;
        for(int i=0;i<weights.size();i++){
            ans+=weights[i];
        }
        return ans;
    }
    int count(vector<int>weight,int days){
        int day=1;
        int load=0;
        for(int i=0;i<weight.size();i++){
            if(load+weight[i]>days){
                day+=1;
                load=weight[i];
            }
            else{
                load+=weight[i];
            }
        }
        return day;
    }
    int maxium(vector<int>&weights){    
         int maxi=INT_MIN;    
          for(int i=0;i<weights.size();i++){   
                  maxi=max(maxi,weights[i]); 
              }
              return maxi;
        }
        

public:
    int shipWithinDays(vector<int>& weights, int days) {
     
        int start=maxium(weights);
        int end=sum(weights);
        while(start<=end){
            int mid=start+(end-start)/2;
            if(count(weights,mid)<=days){
                end=mid-1;

            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
};