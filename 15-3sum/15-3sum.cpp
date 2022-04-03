class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
             for(int i=0;i<=n-3;i++){
                 //runs only distinct elements
                 if(i==0 ||(i>0)&&(nums[i]!=nums[i-1]) ){
                 int l=i+1;
                 int r=n-1;
                 while(l<r){
                     if(nums[i]+nums[l]+nums[r]==0){
                         vector<int>p;
                         p={nums[i],nums[l],nums[r]};
                         ans.push_back(p);
                         
                         //skips same elements in left 
                         while(l<r && (nums[l]==nums[l+1]))l++;
                         
                         //skips same element in right
                         while(l<r && (nums[r]==nums[r-1]))r--;
                         l++; r--;
                     }
                     else if(nums[i]+nums[l]+nums[r]>0){
                         r--;
                     }
                     else{
                         l++;
                     }
                 }
             }
             }
        return ans;
        }
};