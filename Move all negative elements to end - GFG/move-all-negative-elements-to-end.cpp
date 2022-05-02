// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int nums[],int n)
    {
        // Your code goes here
        vector<int>aux;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                aux.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                aux.push_back(nums[i]);
            }
    }
    for(int i=0;i<n;i++){
        nums[i]=aux[i];
    }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends