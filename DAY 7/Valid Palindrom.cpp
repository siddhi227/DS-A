class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string str = "";
        for(int i = 0 ; i < s.length() ; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                str += s[i];
            }
        }
        string str2 = str;
        reverse(str.begin(),str.end());
        return str == str2;
    }
};