class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,r=0,n=nums.size(),cnt=0;
        while(r<n){
            if(nums[r]==val){
                r++;
                cnt++;
            }
            else{
                swap(nums[l],nums[r]);
                l++;
                r++;
            }
            
        }
        return n-cnt;
        
    }
};