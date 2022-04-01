class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int mini=INT_MAX;
        for(int &x:nums){
            sum+=x;
            mini=min(mini,sum);
        }
        if(mini<0){
            return (abs(mini)+1);
        }
        return 1;
        
    }
};