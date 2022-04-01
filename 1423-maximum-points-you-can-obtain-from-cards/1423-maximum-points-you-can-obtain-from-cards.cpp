class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n=cp.size();
        int sum=0;
        int maxSum=0;
        for(int i=0;i<k;i++){
            sum+=cp[i];
        }
        maxSum=sum;
        int j=1;
        for(int i=n-1;i>=n-k;i--){
            sum-=cp[k-j];
            sum+=cp[i];
            maxSum=max(maxSum,sum);
            j++;
        }
        
       return maxSum; 
        
    }
};