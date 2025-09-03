class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int start=0;
        int end=n*m-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int element=matrix[mid/m][mid%m];
            if(target==element){
                return true;
            }
            else if(target<element){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
        
    }
};