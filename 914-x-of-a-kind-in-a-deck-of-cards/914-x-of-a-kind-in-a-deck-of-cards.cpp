class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()<2) return 0;
        unordered_map<int,int>mp;
        int n=deck.size();
        for(int i=0;i<n;i++){
            mp[deck[i]]++;
        }
        int gcd=__gcd(mp[deck[0]],mp[deck[1]]);
        for(auto it=mp.begin();it!=mp.end();it++){
            int newGcd=__gcd(gcd,it->second);
            gcd=newGcd;
        }
        if(gcd==1) return false;
        return true;
        
    }
};