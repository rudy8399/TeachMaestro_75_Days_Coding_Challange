// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            unordered_set<char>st;
            int lenA=A.size();
            int lenB=B.size();
            vector<int>a(26,0);
            vector<int>b(26,0);
            string ans;
            for(int i=0;i<lenA;i++){
                a[A[i]-'a']++;
            }
            for(int i=0;i<lenB;i++){
                b[B[i]-'a']++;
            }
            for(int i=0;i<26;i++){
             if(a[i]>=1 && b[i]==0 || a[i]==0 && b[i]>=1){
                 ans+=char(i+'a');
             }
            }
            if(ans.length()==0) return "-1";
            return ans;

        }
        };



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends