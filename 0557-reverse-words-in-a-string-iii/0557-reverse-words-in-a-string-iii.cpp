******************Brute Force solution********************

class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans ="";
        string word = "";
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(s[i]==' ' || i==s.length()-1){
                   if (i == s.length() - 1) {
                  st.push(ch);
                 }
                while(!st.empty()){
                word+= st.top();
                st.pop();               
                }
                ans += word;
                word = " ";
            }
            else{
                st.push(ch);
            }        
        }
        return ans; 
    }
};


********************OPTIMAL SOLUTION************************

class Solution {
public:
    string reverseWords(string& s) {
        int i = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
        }
        reverse(s.begin() + i, s.end());
        return s;
    }
};
