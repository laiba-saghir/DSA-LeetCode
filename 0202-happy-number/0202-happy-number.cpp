class Solution {
    int func(int n){
        int sum = 0;
        while(n > 0){
            int d = n%10;
            n= n/10;
            sum = sum + d*d;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int s = n,f = n;
        while(f!=1){
            s= func(s);
            f = func(f);
            f = func(f);
            if(s==f && s!=1){
                return false;
            }
        }
         
         return true;
      
    }
};