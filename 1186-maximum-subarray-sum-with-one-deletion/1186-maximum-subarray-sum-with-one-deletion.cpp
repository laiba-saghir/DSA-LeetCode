class Solution {
public:
    int maximumSum(vector<int>& arr) {
       int nodel = arr[0];
       int onedel = INT_MIN; 
       int res = arr[0];
       for(int i=1;i < arr.size();i++){
        int pnodel = nodel;
        int ponedel = onedel;
        nodel = max(nodel + arr[i],arr[i]);
        int v2;
        if(ponedel == INT_MIN) v2 = arr[i];
        else v2 = ponedel + arr[i];
        onedel = max(v2,pnodel);
        res = max(res,max(onedel,nodel));
       }
       return res;

    }
};