class Solution {
public:
    int reverse(int x) {
        int n=(x);
        int rev=0;
        int upperLimit =  (pow(2,31) - 1)/10;
        int lowerLimit = -(pow(2,31)/10);
       	
        while(n){
           if(rev <= upperLimit && rev >= lowerLimit){
                int rem=n%10;
                rev=rev*10+rem;
                n=n/10;
            }
            else return 0;
        }
        return rev;
    }
};