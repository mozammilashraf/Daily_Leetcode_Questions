class Solution {
public:
    int sum;
    int sumofN(int num){
        sum =0;
        if(num<=9) return num;
        string s= to_string(num);
        for(int i=0;i<s.length();i++){
            int ch = s[i]-'0';
            sum = sum + ch;
        }
    return sumofN(sum);
    }
    int addDigits(int num) {     
        return sumofN(num);
    }
};