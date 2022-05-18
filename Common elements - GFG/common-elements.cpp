// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    private:
        void remove_duplicates(int a[],int n,int &i){
            if(i+1<n && a[i]==a[i+1]){
                while(i+1<n && a[i]==a[i+1]){
                    i++;
                }
            }
        }
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>ans;
            int i=0,j=0;
            while(i<n1 && j<n2){
                remove_duplicates(A,n1,i);
                remove_duplicates(B,n2,j);
                
                if(A[i]==B[j]){
                    ans.push_back(A[i]);
                    i++;j++;
                }
                else if(A[i]>B[j]){
                    j++;
                }
                else{
                    i++;
                }
            }
            int n4=ans.size();
            vector<int>res;
            i=0; j=0;
            while(i<n4 && j<n3){
                if(ans[i]==C[j]){
                    res.push_back(ans[i]);
                    i++;j++;
                }
                else if(ans[i]>C[j]){
                    j++;
                }
                else{
                    i++;
                }
            }
            return res;
            
            
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends