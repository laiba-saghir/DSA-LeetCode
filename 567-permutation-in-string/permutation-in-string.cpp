class Solution {
    bool perm(string s,string p){
        sort(s.begin(),s.end());
        sort(p.begin(),p.end());
        return   s == p;
    }
public:
    bool checkInclusion(string s1, string s2) {
        string window;
       window = s2.substr(0,s1.size());
            if(perm(s1,window))  return true;
        
        for(int i= s1.size();i <= s2.size();i++){
            window.erase(0,1);
            window+=s2[i];
             if(perm(s1,window))  return true;
        }
       return false;
    }
};