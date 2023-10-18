class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        int n = s.length();
        
        // Convert the input string to lowercase and remove non-alphanumeric characters
        for (int i = 0; i < n; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                t += tolower(s[i]);
            }
        }
        
        n = t.length();

        for (int i = 0; i < n / 2; i++) {
            if (t[i] != t[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isPalindrome(string s) {
//        int start=0;
//        int end=s.size()-1;
//        while(start<=end){
//            if(!isalnum(s[start])){start++; continue;}
//            if(!isalnum(s[end])){end--;continue;}
//            if(tolower(s[start])!=tolower(s[end]))return false;
//            else{
//                start++;
//                end--;
//            }
//        }
//        return true;
// }
// };