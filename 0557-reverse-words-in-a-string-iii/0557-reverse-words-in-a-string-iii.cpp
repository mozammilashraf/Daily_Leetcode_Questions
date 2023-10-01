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
