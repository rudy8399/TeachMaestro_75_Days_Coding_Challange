class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            int mini=INT_MAX;
            int colIndex=-1;
            for(int j=0;j<col;j++){
                if(matrix[i][j]<mini){
                 mini=matrix[i][j];
                 colIndex=j;   
                }
            }
            mp[mini]=colIndex;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            int index=it->second;
            int mx=INT_MIN;
            for(int i=0;i<row;i++){
                if(matrix[i][index]>mx){
                    mx=matrix[i][index];
                }
            }
            if(it->first==mx) ans.push_back(mx);
        }
        return ans;
    }
};