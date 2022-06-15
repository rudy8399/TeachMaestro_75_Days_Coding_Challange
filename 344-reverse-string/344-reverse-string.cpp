class Solution {
private:
    void solve(vector<char>& s,int i,int j){
        if(i>j) return;
        swap(s[i],s[j]);
        solve(s,i+1,j-1);
    }
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        solve(s,i,j);
        
        //using xor operator 
        // int i=0;
        // int j=s.size()-1;
        // while(i<j){
        //     s[i]^=s[j];
        //     s[j]^=s[i];
        //     s[i]^=s[j];
        //     i++;j--;
        // }
        // return ;
            
    }
};
//   int n=s.size();
//         int i=0;
//         int j=n-1;
//         revStr(s,i,j);
//     }
//     void revStr(vector<char>& s,int i,int j){
//         if(i>=j){
//             return ;
//         }
//         swap(s[i],s[j]);
//         revStr(s,i+1,j-1);
        
//     }