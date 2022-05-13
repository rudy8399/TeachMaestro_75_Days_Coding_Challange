class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return (s==t);
        if(s.length()!=t.length()) return false;
        int aux[26]={0};
        for(int i=0;i<s.length();i++){
            aux[s[i]-'a']++;
            aux[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(aux[i]!=0) return false;
        }
        return true;
    }
   
};