class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int i=0;
        string res;
        while(s[i]){
            if(st.empty()==1 || st.top()!=s[i]){
                st.push(s[i]);
            }
            else if(st.top()==s[i]){
                st.pop();
            }
            i++;
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};