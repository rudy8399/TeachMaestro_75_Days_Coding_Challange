class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=INT_MIN;
        int secLargest=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                secLargest=largest;
                largest=nums[i];
            }
            else if(nums[i]>secLargest){
                secLargest=nums[i];
            }
        }
        int prod=(largest-1)*(secLargest-1);
        return prod;
    }
        // priority_queue<int>pq;
        // for(int x:nums){
        //     pq.push(x);
        // }
        // int a=pq.top();
        // pq.pop();
        // int b=pq.top();
        // int prod=(a-1)*(b-1);
        // return prod;
    //}
};