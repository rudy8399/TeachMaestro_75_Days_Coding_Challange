// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        map<int,int>pos;
        unordered_map<int,int>neg;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(a[i]>=0) pos[a[i]]++;
            else neg[a[i]]++;
        }
        for(auto it=pos.begin();it!=pos.end();it++){
            int key=-(it->first);
            auto it2=neg.find(key);
            if(it2!=neg.end()){
                int mini=min(it->second,it2->second);
                for(int i=0;i<mini;i++){
                    ans.push_back(it2->first);
                    ans.push_back(it->first);
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends