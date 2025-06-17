class Solution {
public:
    int maxDepth(string s) {
        // int open=0,result=INT_MIN;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='('){
        //         open++;
        //         result=max(open,result);
        //     }
        //     else if(s[i]==')'){
        //         open--;
        //     }
        // }
        // return result==INT_MIN?0:result;
        stack<char> st;
        int result=0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                result = max(result,(int) st.size());
            } else if (s[i] == ')') {
                st.pop();
            }
        }
        return result;
    }
};