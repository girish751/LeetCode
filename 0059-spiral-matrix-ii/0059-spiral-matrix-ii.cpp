class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int> row(n,0);
        vector<vector<int>> matrix(n,row);
        int k{1};
        int left{0},right{n-1},top{0},bottom{n-1};
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                matrix[top][i] = k;
                k++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=k;
                k++;
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=k;
                k++;
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                matrix[i][left]=k;
                k++;
            }
            left++;
            }
        }
        return matrix;
    }
};