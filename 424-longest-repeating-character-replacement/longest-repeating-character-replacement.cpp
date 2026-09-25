class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        int high = 0;
        int n = s.size();
        int res = INT_MIN;
        unordered_map<char,int> f;
        int max_freq = 0;
        for(high =0;high < n;high++){
            f[s[high]]++;
            max_freq = max(max_freq,f[s[high]]);
            int sizee = f.size();
         while((high - low+1) - max_freq > k){
                f[s[low]]--;
                low++;
        
               
            }
             int len = high - low+1;
                res = max(len,res);
           
        }
       
              return res;

        
      


    }
};