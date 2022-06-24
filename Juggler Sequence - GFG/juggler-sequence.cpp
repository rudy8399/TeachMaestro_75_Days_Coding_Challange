// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
private:
void solve(int n,vector<int>& ans){
    if(n==1) {
        return;
        
    }
    if(n%2==0) {
        ans.push_back(sqrt(n));
        solve(sqrt(n),ans);
    }
    else {
        ans.push_back(pow(sqrt(n),3));
        solve(pow(sqrt(n),3),ans);
    }
}
public:
    vector<int> jugglerSequence(int N){
       // code here
       vector<int> v;
    v.push_back(N);
    solve(N,v);
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