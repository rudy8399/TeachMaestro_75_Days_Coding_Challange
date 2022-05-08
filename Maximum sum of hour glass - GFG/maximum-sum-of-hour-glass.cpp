// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> Mat) {
        if(n<3||m<3) return -1;
      int k=0,mx=INT_MIN;
      while(k<=n-3){
          int l=0;
          while(l<=m-3){
              int sum=0;
              for(int i=k;i<k+3;i++){
                  for(int j=l;j<l+3;j++){
                      sum+=Mat[i][j];
                  }
              }
                sum-=Mat[k+1][l];
                sum-=Mat[k+1][l+2];
                mx=max(sum,mx);
                l++;
          }
          k++;
      }
      return mx;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}  // } Driver Code Ends