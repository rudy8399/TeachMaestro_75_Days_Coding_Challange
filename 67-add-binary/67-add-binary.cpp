class Solution {
public:
    string addBinary(string a, string b) {
        int aSize=a.length();
        int bSize=b.length();
        int carry=0;
        int i=aSize-1;
        int j=bSize-1;
        string ans="";
        
        while(i>=0 ||j>=0 || carry!=0 ){
            int x=0;
            if(i>=0 && a[i]=='1'){
                x=1;
            }
            
            int y=0;
            if(j>=0 && b[j]=='1'){
                y=1;
            }
            int sum=x+y+carry;
            ans=to_string(sum%2)+ans;
            carry=sum/2;
            i--; j--;
        }
        
        return ans;    
        
    }
};