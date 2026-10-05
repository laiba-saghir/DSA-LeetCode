class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(int i=0;i<s.size();i++){
             if(s[i] == '(')st.push(0);
        else{
        int top = st.top();
        st.pop();
        if(top==0)  top = 1;
        else top=2*top;
        st.top() += top; 
        }
        } 
        return st.top();
    }
};