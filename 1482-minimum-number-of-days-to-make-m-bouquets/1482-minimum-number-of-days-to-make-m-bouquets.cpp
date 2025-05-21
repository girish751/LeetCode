class Solution {
    bool possible(vector<int>bloomDay,int m,int k,int day){
        int total=0;
        for(int i=0;i<bloomDay.size();i++){
            int count=0;
            while(i<bloomDay.size() && count<k && bloomDay[i]<=day){
                count++;
                i++;
            }
                if(count==k){
                    total++;
                    i--;
                }
                if(total>=m){
                    return true;
                }
            }
    
    
        return false;
    }
    int min(vector<int>&bloomDay){
        int x=INT_MAX;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<x){
                x=bloomDay[i];
            }
            }
            return x;
    }
    
     int max(vector<int>&bloomDay){
        int x=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]>x){
                x=bloomDay[i];
            }
            }
            return x;
     }
    
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
       long long total = (long long)m * k;
        if (total > bloomDay.size()) {
            return -1;
        }
        int start=min(bloomDay);
        int end=max(bloomDay);
        while(start<end){
            int mid=start+(end-start)/2;
            if(possible(bloomDay,m,k,mid)){
                end=mid;
            }
            else {
                start=mid+1;
            }
        }
            return start;
    }
};