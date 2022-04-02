class Solution {
public:
    bool binarySearch(vector<int>&nums,int t){
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==t){
                return 1;
            }
            else if(nums[mid]>t){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return 0;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
//        vector<int>aux1(1001,0);
//         vector<int>aux2(1001,0);
//         vector<int>ans;
        
//         for(int i=0;i<n1;i++){
//             aux1[nums1[i]]++;
//         }
//          for(int i=0;i<n2;i++){
//             aux2[nums2[i]]++;
//         }
//         for(int i=0;i<1001;i++){
//             if(aux1[i]>0 &&aux2[i]>0){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
        vector<int>ans;
         sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         for(int i=0;i<n1;i++){
             while(i<n1-1 && nums1[i]==nums1[i+1]  ){
                 i++;
             }
             if(binarySearch(nums2,nums1[i])==1){
                ans.push_back(nums1[i]);    
             }   
             
         }
        return ans;
     
    }
};