class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //TLE
    //     int cnt=0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         int sum=0;
    //         for(int j=i;j<n;j++){
    //             sum+=nums[j];
    //             if(sum==k){
    //                 cnt++;
    //             }
    //         }
    //     }
    // return cnt;
    //}
        int sum=0;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k){
                cnt++;
            }
            
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
            
            
        }
        return cnt;
    }
};