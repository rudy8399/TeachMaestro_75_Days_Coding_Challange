// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        // code here
        
        int size=min(N,M);
        int i=0;
        while(i<size){
            int colSum=0,rowSum=0;
            for(int row=0;row<N;row++){
                colSum+=A[row][i];
            }
            for(int col=0;col<M;col++){
                rowSum+=A[i][col];
            }
            i++;
            if(rowSum!=colSum) return 0;
            
        }
        return 1;
    }
      
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}  // } Driver Code Ends