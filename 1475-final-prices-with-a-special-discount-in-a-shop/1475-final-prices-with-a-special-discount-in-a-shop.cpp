class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
         stack<int>st;
        vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()>prices[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=0;
        }
        else{
            ans[i]=st.top();
        } 
        st.push(prices[i]);
    }
    for(int i=0;i<n;i++){
        ans[i]=prices[i]-ans[i];
    }
    return ans;

        
    }
};