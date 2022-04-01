//sliding window not working or may need some changes
//         int n=nums.size();
//         int i=0;
//         int j=0;
//         int cnt=0;
//         int sum=nums[j];
//         while(j<n){
//             if(sum==k){
//                 cnt++;
//                 j++;
//             }
//             else if(sum>k && i<=j){
//                 sum-=nums[i];
//                 i++;
//             }
//             else{
//                 j++;
//                 sum+=nums[j];
//             }
//         }
//         return cnt;
//         }