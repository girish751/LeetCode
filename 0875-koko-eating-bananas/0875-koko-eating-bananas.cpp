class Solution {
       long long required(const vector<int>& piles, int k) {
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + k - 1) / k; 
        }
        return totalHours;
    }

   int maxium(vector<int>&piles){
    int maxi=INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
   }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        long long end=maxium(piles);
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long tre=required(piles,mid);
            if(tre<=h){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
   
    }
// };\#include <vector>
// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int max1 = *max_element(piles.begin(), piles.end());
//         int l = 1, r = max1, mid;
        
//         while (l <= r) {
//             mid = (l + r) / 2;
//             long long ans = 0;
//             for (int x : piles) {
//                 ans += (x + mid - 1) / mid;
//             }
//             if (ans > h) l = mid + 1;
//             else r = mid - 1;
//         }
//         return l;
//     }
};



