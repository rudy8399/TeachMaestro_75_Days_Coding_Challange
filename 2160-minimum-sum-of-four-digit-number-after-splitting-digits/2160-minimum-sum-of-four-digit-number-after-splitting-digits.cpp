class Solution {
private:
    int formNum(int a,int b){
        return a*10+b;
        
    }
public:
    int minimumSum(int num) {
        int arr[4];
        int n=num;
        int i=0;
        while(n){
            int rem=n%10;
            n=n/10;
            arr[i++]=rem;
        }
        
        sort(arr,arr+4);
        int new1=formNum(arr[0],arr[3]);
        int new2=formNum(arr[1],arr[2]);
        int sum=new1+new2;
        return sum;
    }
};