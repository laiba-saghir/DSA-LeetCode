class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxLen = 0;;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c=='(') st.push(i);
            else if(c==')'){ 
                st.pop();
                if(st.empty()){
                   st.push(i);
                }
                else{
                    int cl = i-st.top();
                    maxLen = max(maxLen,cl);
                }
            }
        }
        return maxLen;
     
    }
};