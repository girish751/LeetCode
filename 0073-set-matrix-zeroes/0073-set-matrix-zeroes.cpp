class Solution {
     public:
//     void markrow(int i,vector<vector<int>>& matrix){
//         for(int j=0;j<matrix[0].size();j++){
//             if(matrix[i][j]!=0){
//                 matrix[i][j]=INT_MAX;
//             }
//         }
//     }
//     void markcol(int j,vector<vector<int>>& matrix){
//         for(int i=0;i<matrix.size();i++){
//             if(matrix[i][j]!=0){
//                 matrix[i][j]=INT_MAX;
//             }
//         }
//     }
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[0].size();j++){
//                 if(matrix[i][j]==0){
//                 markrow(i,matrix);
//                 markcol(j,matrix);
//             }
//         }
//         }
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[0].size();j++){
//                 if(matrix[i][j]==INT_MAX){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
                
//     }


void setZeroes(vector<vector<int>>& matrix) {
       int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);
  for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
        }
            for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(row[i] ||col[j]){
                    matrix[i][j]=0;
                }
            }
        }
}
};