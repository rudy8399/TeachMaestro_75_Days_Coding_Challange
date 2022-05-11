// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int s=0,e=x;
        long long ans= -1;
        
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long square=mid*mid;
            if(square==x) return mid;
            else if(square<x){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
            }
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends