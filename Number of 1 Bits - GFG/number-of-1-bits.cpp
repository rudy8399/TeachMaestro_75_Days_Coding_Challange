// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int ans=0;
        while(N>0){
            N=N & (N-1);
            ans++;
        }
        return ans;
        
        
        // int count=0;
        // while(N>0){
        //     int ans=N&1;
        //     if(ans==1){
        //         count++;
        //     }
        //     N=N>>1;
        // }
        // return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends