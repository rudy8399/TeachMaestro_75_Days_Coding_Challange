class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //stair case search using the property that the grid is sorted 
        int row=grid.size();
        int col=grid[0].size();
        int cnt=0;
        int i=0;
        int j=col-1;
        while(i<row and j>=0){
            if(grid[i][j]<0){
                cnt+=row-i;
                j--;
            }
            else{
                i++;
                
            } 
        }
        return cnt;
    }
};