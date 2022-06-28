class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int size=target.size();
        int largestElement=target[size-1];
        stack<int>s;
        for(int i=size-1;i>=0;i--)
        {
            s.push(target[i]);
        }
        int i=1;
        while(i<=largestElement){
            res.push_back("Push");
            if(s.top()!=i){
                res.push_back("Pop");
            }
            else{
                s.pop();
            }
            i++;
        }
        return res;
    }
};