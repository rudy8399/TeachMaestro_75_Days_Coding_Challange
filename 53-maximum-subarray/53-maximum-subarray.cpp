class Solution {
public:
    //O(n^2) TLE
//     int maxSubArray(vector<int>& nums) {
//     int maxSum=INT_MIN,n=nums.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             maxSum=max(maxSum,sum);
//         }
//     }
//     return maxSum;
//     }
   
    
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int ms=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            if(nums[i]>cs){
                cs=nums[i];
            }
            ms=max(cs,ms);
    }
        return ms;
    
    }
};