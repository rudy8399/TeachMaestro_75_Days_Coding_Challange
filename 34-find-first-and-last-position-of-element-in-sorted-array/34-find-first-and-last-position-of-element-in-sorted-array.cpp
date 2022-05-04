class Solution {
private:
    int leftIndex(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target) e=mid-1;
            
            else s=mid+1;  
            
             mid=s+(e-s)/2;
        }
        return ans;
    }
    int rightIndex(vector<int>& nums, int target){
         int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {        
        if(nums.size()==0){
            return {-1,-1};
        }
        vector<int>res;
        res.push_back(leftIndex(nums,target));
        res.push_back(rightIndex(nums,target));
        return res;     
    }
};
    //     int leftElement(vector<int>& nums, int target){
       
//         int n=nums.size(), l=0,r=n-1,ans=-1;
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             if(nums[mid]==target){
//                 ans=mid;
//                 r=mid-1;
//             }
//             else if(nums[mid]>target){
//                 r=mid-1;
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         return ans;
        
//     }
//     int rightElement(vector<int>& nums, int target){
//         int n=nums.size(), l=0,r=n-1,ans=-1;
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             if(nums[mid]==target){
//                 ans=mid;
//                 l=mid+1;
//             }
//             else if(nums[mid]>target){
//                 r=mid-1;
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         return ans;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//          if(nums.size()==0){
//             return {-1,-1};
//         }
//         vector<int>res={leftElement(nums,target),rightElement(nums,target)};
//         return res;
        
//     }
