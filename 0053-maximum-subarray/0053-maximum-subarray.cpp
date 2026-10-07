class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int bestarr = nums[0];
        int ans = nums[0];
        for(int i =1;i < n;i++){
            int v1 = bestarr + nums[i];
            int v2 = nums[i];
            bestarr = max(v1,v2);
            ans = max(ans,bestarr);
        }
        return ans;
    }
};