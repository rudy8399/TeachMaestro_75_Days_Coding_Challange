class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
       vector<int>aux1(1001,0);
        vector<int>aux2(1001,0);
        vector<int>ans;
        
        for(int i=0;i<n1;i++){
            aux1[nums1[i]]++;
        }
         for(int i=0;i<n2;i++){
            aux2[nums2[i]]++;
        }
        for(int i=0;i<1001;i++){
            if(aux1[i]>0 &&aux2[i]>0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};