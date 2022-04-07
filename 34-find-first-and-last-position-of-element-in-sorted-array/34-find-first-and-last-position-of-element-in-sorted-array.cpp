class Solution {
public:
    int leftElement(vector<int>& nums, int target){
       
        int n=nums.size(), l=0,r=n-1,ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
    int rightElement(vector<int>& nums, int target){
        int n=nums.size(), l=0,r=n-1,ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         if(nums.size()==0){
            return {-1,-1};
        }
        vector<int>res={leftElement(nums,target),rightElement(nums,target)};
        return res;
        
    }
};