class Solution {
public:
bool  all(vector<int>&freq){
        for(auto it:freq){
            if(it!=0) return false;
        }
        return true;
      }
    vector<int> findAnagrams(string s, string p) {
        int n= p.size();
        int m = s.size();
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(int i=0;i < n;i++){
            freq1[p[i] - 'a']++;
        }
        vector<int> ans;
        int l=0,r=0;
        while(r < m){
            freq1[s[r]-'a']--;
            if(r-l+1 == n){
                if(all(freq1)) ans.push_back(l);
                freq1[s[l] - 'a']++;
                l++;
            }
            r++;
        }
        return ans;
    }
};