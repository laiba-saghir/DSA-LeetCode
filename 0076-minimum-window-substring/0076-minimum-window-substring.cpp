class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<char,int> f;
        unordered_map<char,int> need;
        for(char ch:t){//t ki fre nikali ha
            need[ch]++;
        }
       int l=0,h=0,start=0;
       int mlen = INT_MAX;
        for(int h =0; h < n;h++){
             f[s[h]]++;
             bool valid = true;
             //window ko chk kiya
             for(auto it:need){
                if(f[it.first] < it.second){
                    valid = false;
                    break;
                }
             }
           
             while(valid){
                  int k = h-l+1;
                  if(k < mlen){
                    mlen = k;
                    start = l;
                  }
                f[s[l]]--;
                l++;
                valid = true;
             //window ko chk kiya
             for(auto it:need){
                if(f[it.first] < it.second){
                    valid = false;
                    break;
                }
             }
          }
              
        }
               if(mlen == INT_MAX) return "";
        
          return s.substr(start,mlen);
    }
};