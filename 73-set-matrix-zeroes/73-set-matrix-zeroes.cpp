class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<pair<int,int>>zero;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    pair<int,int>p={i,j};
                    zero.push_back(p);
                }
            }
        }
        for(int i=0;i<zero.size();i++){
            int rowIndex=zero[i].first;
            int colIndex=zero[i].second;
            for(int i=0;i<col;i++){
                matrix[rowIndex][i]=0;
            }
            for(int i=0;i<row;i++){
                matrix[i][colIndex]=0;
            }
        }
        
    }
};