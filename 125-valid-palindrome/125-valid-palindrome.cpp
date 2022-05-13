class Solution {
public:
    char tolowercase(char a) {
	if (a >= 'A' and a <= 'Z') {
		return a - 'A' + 'a';
	}
	else {
		return a;
	}
}
    string newString(string s) {
	string s1;
	int i = 0;
	while (i < s.length()) {
		s[i] = tolowercase(s[i]);
			if (s[i] >= 'a' and s[i] <= 'z' or s[i]>='0' and s[i]<='9') {
			s1.push_back(s[i]);
            }
		i++;

	}
	return s1;

}
    bool isPalindrome(string s) {
        if (s.empty()) return true; 
        int z = s.size();
        int i = 0;
        while (i < z) {
            if (!isalnum(s[z])) { z--;continue;  }
            if (!isalnum(s[i])) { i++; continue; }   
            if (tolower(s[i++]) != tolower(s[z--])) return false;
        }
        return true;
    }
};