class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       string ans="";
        int n=words.size();
        for(int i=0;i<n;i++){
            if(words[i]==string(words[i].rbegin(),words[i].rend())){
                ans=words[i];
                return ans;
            }
        }
        return ans;
    }
};