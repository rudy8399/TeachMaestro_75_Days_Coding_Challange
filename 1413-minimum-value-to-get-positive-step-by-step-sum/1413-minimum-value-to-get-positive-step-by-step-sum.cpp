class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int mini=0;
        for(int &x:nums){
            sum+=x;
            mini=min(mini,sum);
        }

        return 1-mini;
        
    }
};