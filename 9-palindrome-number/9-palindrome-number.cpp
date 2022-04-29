class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long n=x;
        long long r=0;
        while(n!=0){
            long long rem=n%10;
            r=r*10+rem;
            n=n/10;
        }
        if(r==x){
            return true;
        }
        return false;
    }
};