class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int s=0;
        int n=nums.size();
        int e=n-1;
      
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[e]) s=mid+1;
            else e=mid;
        }
        return nums[s] ;
    }
};