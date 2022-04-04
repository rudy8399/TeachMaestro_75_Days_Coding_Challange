class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        int cnt=0;
        int lli=0;
        vector<int>res;
        for(int i=0;i<n;i++){
            cnt++;
            for(int j=n-1;j>=0;j--){
                if(s[i]==s[j]){
                    lli=max(lli,j);
                    break;
                }
            }
            if(i==lli){
                res.push_back(cnt);
                cnt=0;
            }
        }
        return res;
    }
};