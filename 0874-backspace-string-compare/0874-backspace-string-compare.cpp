class Solution {
public:
    void solve(string temp, string &newstring){
        int hashcnt =0;
        int sl = temp.length();

        for(int i=sl-1;i>=0;i--){
            if(temp[i]!='#' ){
                if(hashcnt>0){
                hashcnt--;
                continue;
                }
                else{
                    newstring = temp[i]+newstring;
                }
            }
            if(temp[i]=='#'){
                hashcnt++;
            }
        }
    }

    bool backspaceCompare(string s, string t) { 
        string ns="";
        string nt ="";
        solve(s,ns);
        solve(t,nt);
       return ns == nt; 
    }
};