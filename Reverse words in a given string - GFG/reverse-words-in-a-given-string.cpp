// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        int n=S.length();
        vector<string>aux;
        string word;
        for(int i=0;i<n;i++){
            word+=S[i];
            if(S[i]=='.' || i==n-1){
                aux.push_back(word);
                word.clear();
            }
        }
        n=aux.size();
        aux[n-1]+=".";
        word=aux[0];
        aux[0].erase((word.size()-1),1);
        
        string ans;
        for(int i=aux.size()-1;i>=0;i--){
            ans+=aux[i];
        }
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends