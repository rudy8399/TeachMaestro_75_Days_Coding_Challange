class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
        }
        vector<int>aux(mx+1,0);
        for(int i=0;i<n;i++){
            if(aux[nums[i]]++);
        }
        for(int i=0;i<aux.size();i++){
            if(aux[i]>1){
                return i;
            }
        }
            return -1;
        }

};