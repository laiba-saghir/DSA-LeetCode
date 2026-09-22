class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
       int l = 0,h = 0;
       int res = INT_MAX;
       int sum = 0;
       while(h < n){
            sum = sum + nums[h];
            while(sum >= target ){
                int len = h-l+1;
                res = min(res,len);
                sum = sum - nums[l];
                l++;
            }
            h++;
       } 
    return res == INT_MAX ? 0 : res;
    }
};