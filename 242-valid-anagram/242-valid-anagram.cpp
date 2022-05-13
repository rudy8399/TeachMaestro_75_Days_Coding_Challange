class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int sizeS=s.length();
        int sizeT=t.length();
        int i=0;
        if(sizeS!=sizeT) return false;
        
            while(i<sizeS &&i<sizeT){
                if(s[i]!=t[i]) return false;
                i++;
            }
        return true;
        }
};