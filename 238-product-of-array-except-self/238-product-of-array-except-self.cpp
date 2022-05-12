class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int size=nums.size();
        bool flag=0;
        int cnt=0;
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                flag=1;
                cnt++;
            }
            else product*=nums[i];
        }
        if(cnt>1) product=0;
        vector<int>ans(size,0);
        for(int i=0;i<size;i++){
            if(flag==1 && nums[i]!=0){
                ans[i]=0;
            }
            else if(flag==1 && nums[i]==0){
                ans[i]=product;
            }
            else{
                ans[i]=product/nums[i];
            }
                
            }
        return ans;
    }
};