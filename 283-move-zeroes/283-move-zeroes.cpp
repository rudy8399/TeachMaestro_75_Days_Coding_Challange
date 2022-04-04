class Solution {
public:
    //think of moving non zero elements to the left instead of moving zero elements       to the right.
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int r=0;
        while(r<nums.size()){
            if(nums[r]==0){
                r++;
            }
            else{
                swap(nums[l],nums[r]);
                l++;
                r++;  
           }
        }

    }  
};