// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int row,col;
        row=col=matrix.size();
        int totalElements=row*col;
        vector<int>ans;
        int cnt=0,i=0;
        
        while(i<row && cnt<=totalElements){
            if(i%2==0){
                for(int k=0;k<col;k++){
                    ans.push_back(matrix[i][k]);
                    cnt++;
                }    
            }
            else{
                for(int k=col-1;k>=0;k--){
                    ans.push_back(matrix[i][k]);
                    cnt++;
                }
                
            }
            i++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends