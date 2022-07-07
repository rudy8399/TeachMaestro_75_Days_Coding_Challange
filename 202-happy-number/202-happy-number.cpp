class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        int x=n;
        while(1){
            int sum=0;
            while(x){
                int rem=x%10;
                sum+=pow(rem,2);
                x=x/10;
            }
            if(sum==1) return true;
            if(st.find(sum)!=st.end()){
                return false;
            }
            st.insert(sum);
            x=sum;
        }
        return false;
    }
};