// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    
         string removeConsecutiveCharacter(string S)
    {
        string res;
        int n=S.length();
        for(int i=1;i<n;i++){
            if(S[i]!=S[i-1]){
                res+=S[i-1];
            }
        }
        res+=S[n-1];
        return res;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends