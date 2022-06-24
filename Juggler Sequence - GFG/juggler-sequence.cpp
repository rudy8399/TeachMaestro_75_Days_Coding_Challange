// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
// private:
// void solve(int n,vector<int>& ans){
//     if(n==1) {
//         ans.push_back(1);
//         return;
        
//     }
//     if(n&1==0) {
//         ans.push_back(sqrt(n));
//         solve(sqrt(n),ans);
//     }
//     else 
//     int p=sqrt(n)*sqrt(n)*sqrt(n);
//     ans.push_back(p);
//     solve(p,ans);
// }
public:
    vector<int> jugglerSequence(int N){
       // code here
       vector<int> v;
       while(N!=1)
       {
          v.push_back(N);
          if(N%2==0)N=sqrt(N);
          else N=sqrt(N)*sqrt(N)*sqrt(N);
       }
       v.push_back(1);
       return v;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends