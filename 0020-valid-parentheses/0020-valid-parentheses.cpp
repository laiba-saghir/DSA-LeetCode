class Solution {
public:
    bool isValid(string s){
        stack<char> t;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                t.push(s[i]);
            } 
            else{
                if(t.empty()) return false;
                char top = t.top();
                if(s[i] == ')' && top!= '(') return false;
                if(s[i] == ']' && top!= '[') return false;
                if(s[i] == '}' && top!= '{') return false;
                t.pop();
            }

        }
        return t.empty();
    }
};