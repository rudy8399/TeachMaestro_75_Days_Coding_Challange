class Solution {
private:
    bool solver(int n){
        if(n==1) return true;
        if(n%4!=0) return false;
        return solver(n/4);
    }
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        return solver(n);
        
    }
};