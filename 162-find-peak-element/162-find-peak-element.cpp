class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(mid>0 and mid<n-1){
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                    return mid;
                }
                else if(nums[mid+1]>nums[mid]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
                
            }
            else if(mid==0){
                if(nums[mid]>nums[mid+1]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            else{
                if(nums[mid]>nums[mid-1]){
                    return n-1;
                }
                else{
                    return n-2;
                }
            }
        }
        return -1;
    }
};