class Solution {
public:
    bool checkValidString(string s) {
        stack<int> openStack, starStack;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                openStack.push(i);
            } else if (s[i] == '*') {
                starStack.push(i);
            } else { // s[i] == ')'
                if (!openStack.empty()) {
                    openStack.pop();
                } else if (!starStack.empty()) {
                    starStack.pop();
                } else {
                    return false;
                }
            }
        }
        
        // Match remaining '(' with '*' that come after them
        while (!openStack.empty() && !starStack.empty()) {
            if (openStack.top() > starStack.top()) {
                return false; // '(' comes after '*', can't match
            }
            openStack.pop();
            starStack.pop();
        }
        
        return openStack.empty();
    }
};