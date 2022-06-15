class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         vector<pair<int,int>>zero;
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(matrix[i][j]==0){
//                     pair<int,int>p={i,j};
//                     zero.push_back(p);
//                 }
//             }
//         }
//         for(int i=0;i<zero.size();i++){
//             int rowIndex=zero[i].first;
//             int colIndex=zero[i].second;
//             for(int i=0;i<col;i++){
//                 matrix[rowIndex][i]=0;
//             }
//             for(int i=0;i<row;i++){
//                 matrix[i][colIndex]=0;
//             }
//         }
        
//     }
        
//         int row=matrix.size();
//         int col=matrix[0].size();
//         //create matrix of row and col size to store index of zero
//         vector<bool>rowMat(row,1);
//         vector<bool>colMat(col,1);
        
//         //find index of zero
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(matrix[i][j]==0){
//                     rowMat[i]=0;
//                     colMat[j]=0;
//                 }
//             }
//         }
//         //make whole rows zero 
//         for(int i=0;i<row;i++){
//             if(rowMat[i]==0){
//                 for(int j=0;j<col;j++){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//         //make whole cols zero
//         for(int i=0;i<col;i++){
//             if(colMat[i]==0){
//                 for(int j=0;j<row;j++){
//                     matrix[j][i]=0;
//                 }
//             }
//         }
//         return;
//     }
        int row=matrix.size();
        int col=matrix[0].size();
        bool col0=true;
        
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if(col0==false){
                matrix[i][0]=0;
            }
            
        }
        
        return ;
    }
};