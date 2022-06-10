class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //not working the delete function is not deleting all the elements 
        // int n=nums.size();
        // vector<int>::iterator it;
        // int i=1;
        // for(it=nums.begin()+1;it!=nums.end();it++){
        //    if(*it==*(it-1)){
        //        nums.erase(it);
        //    }
        // } 
        // return nums.size();
        
        int n=nums.size();
        // int cur=0;
        // int cnt=1;
        // for(int i=1;i<n;i++){
        //     if(nums[cur]!=nums[i]){
        //         cur++;
        //         nums[cur]=nums[i];
        //         cnt++;
        //     }
        // }
        // return cnt;
        int cur=0;
        int diff=1;
        int cnt=1;
        while(diff<n){
            if(nums[diff]==nums[cur]){
                diff++;
            }
            else{
                nums[cur+1]=nums[diff];
                cur++;
                diff++;
                cnt++;
            }
        }
        return cnt;
    }
    
};