class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>pq;
        for(int x:stones)
            pq.push(x);
        while(pq.size()>1){
            int largest1=pq.top();
            pq.pop();
            int largest2=pq.top();
            pq.pop();
            if(largest1!=largest2){
                int num=largest1-largest2;
                pq.push(num);
            }
        }
        if(pq.size()==0) return 0;
        return pq.top();
        
    }
};