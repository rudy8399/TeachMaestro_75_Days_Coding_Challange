class Solution {
public:
    bool isValid(string str) {
    int n=str.length();
    stack<char>st;
    for(int i=0;i<n;i++){
        char s=str[i];
        if(s=='{' || s=='(' || s=='['){
            st.push(s);
        }
        else{
           
            if(!st.empty()){
                char ele=st.top();
                if(ele=='{' && s=='}' || ele=='(' && s==')' || ele=='[' && s==']'){
                    st.pop();
                }
                else return 0;
            }
            else{
                return 0;
            }
        }
    }
    if(!st.empty()) return 0;
    return 1;
    }
};