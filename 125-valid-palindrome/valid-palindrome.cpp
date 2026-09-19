class Solution {
public:
    bool isPalindrome(string s) {
        bool p;
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while(i < j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            else if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;

            }
            else{
                return  false;
            }
        }
        return true;
    }
};