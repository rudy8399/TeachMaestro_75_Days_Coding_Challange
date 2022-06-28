class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            if(ops[i]!="C" && ops[i]!="D" && ops[i]!="+" ){
                int a=stoi(ops[i]);
                s.push(a);
            }
            else if(ops[i]=="C" ) s.pop();
            
            else if(ops[i]=="D"){
                int ele=s.top();
                s.pop();
                s.push(ele);
                s.push(ele*2);
            }
            else{
                int ele1=s.top();
                s.pop();
                int ele2=s.top();
                s.push(ele1);
                s.push(ele1+ele2);
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};