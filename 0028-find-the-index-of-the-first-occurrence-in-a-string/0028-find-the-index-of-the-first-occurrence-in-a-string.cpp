class Solution {
public:
    int strStr(string haystack, string needle) {  
        int t=haystack.size();
        int s=needle.size();
            for(int i=0;i<t;i++){
                    if(haystack.substr(i,s)== needle){
                     return i;
                 }            
            }
        return -1;
    }
};