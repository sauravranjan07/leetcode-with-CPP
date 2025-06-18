class Solution {
public:
    int countHomogenous(string s) {
        long len=0,result=0;
        for(int i=0;i<s.length();i++){
            if(i>0 and s[i]==s[i-1]){
                len++;
                result+=len;
            }else{
                len=1;
                result+=len;
            }
        }
       return static_cast<int>(result % (1000000007));
    }
};