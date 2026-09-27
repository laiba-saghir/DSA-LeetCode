class Solution {
    bool vowel(char s){
        return s == 'a' ||s== 'e' ||s== 'i' ||s== 'o' ||s== 'u';
    }
public:
    
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i < k;i++){
          if(vowel(s[i])){
            count++;
          }
        }
        int max_val = count;
        for(int i = k;i < s.size(); i++){
          // s -= s[i-1];
            if(vowel(s[i])){
            count++;
          }
           if(vowel(s[i-k])){
            count--;
          }
          max_val = max(max_val,count);
        }
        return max_val;
    }
};