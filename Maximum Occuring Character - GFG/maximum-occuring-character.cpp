// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        // int a[26]={0};
        // for(int i=0;i<str.length();i++){
        //     a[str[i]-'a']++;
        // }
        // int mx=INT_MIN;
        // int ans=-1;
        // for(int i=25;i>=0;i--){
        //     if(mx<=a[i]){
        //         mx=a[i];
        //         ans=i;
        //     }
        // }
        // return char(ans+'a');
        int n=str.size();
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[str[i]]++;
        }
        int maxi=INT_MIN;
        char ans;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>maxi){
                maxi=it->second;
                ans=it->first;
            }
        }
        return ans;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends