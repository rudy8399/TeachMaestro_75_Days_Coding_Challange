class Solution {
public:
    vector<int> partitionLabels(string S) {
        //O(n^2)
        //int n=s.size();
        // int cnt=0;
        // int lli=0;
        // vector<int>res;
        // for(int i=0;i<n;i++){
        //     cnt++;
        //     for(int j=n-1;j>=0;j--){
        //         if(s[i]==s[j]){
        //             lli=max(lli,j);
        //             break;
        //         }
        //     }
        //     if(i==lli){
        //         res.push_back(cnt);
        //         cnt=0;
        //     }
        // }
        // return res;
        
        //O(n)
    //     int n=s.size();
    //     vector<int>pos(26,0);
    //     for(int i=0;i<n;i++){
    //         pos[s[i]-'a']=i;
    //     }
    //     vector<int>res;
    //     int cnt=0 ,lli=0,clli=0;
    //     for(int i=0;i<n;i++){
    //         clli=pos[s[i]-'a'];
    //         lli=max(lli,clli);
    //         cnt++;
    //         if(lli==i){
    //             res.push_back(cnt);
    //             cnt=0;
    //         }
    //     }
    //     return res;
    // }
        //O(N) neat code 
        vector<int> charIdx(26, 0);
        for(int i = 0; i < S.size(); i++){
            charIdx[S[i]-'a'] = i;
        }
        
        vector<int> results;
        
        int maxIdx = -1, lastIdx = 0;
        for(int i = 0; i < S.size(); i++){
            maxIdx = max(maxIdx, charIdx[S[i]-'a']);
            if(i == maxIdx) {
                results.push_back(maxIdx - lastIdx + 1);
                lastIdx = i+1;
            }
        }
        return results;
    }
};