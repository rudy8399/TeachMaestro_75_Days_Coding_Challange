class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto it=mp.begin();it!=mp.end();it++){
            int key=it->second;
            if(s.count(key)==1){
                return false;
            }
            else{
                s.insert(key);
            }
        }
        return true;
    }
    
};