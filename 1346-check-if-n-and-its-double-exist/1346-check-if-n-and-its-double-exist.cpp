class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) i++;
            int key=arr[i]*2;
            auto it=mp.find(key);
            if(it!=mp.end())return true;
        }
        return false;
    }
};