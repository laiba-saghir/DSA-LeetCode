class Solution {
public:
    int maxSum(vector<int>& nums){
        int bestend = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size();i++){
            int v1 = bestend + nums[i];
            int v2 = nums[i];
            bestend = max(v1,v2);
            ans = max(ans,bestend);
        }
        return ans;
    }
    int minSum(vector<int>& nums){
       int  bestend = nums[0];
       int  ans = nums[0];
        for(int i = 1; i < nums.size();i++){
            int v1 = bestend + nums[i];
            int v2 = nums[i];
            bestend = min(v1,v2);
            ans = min(ans,bestend);
        }
        return ans;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int ans = max(maxSum(nums),abs(minSum(nums)));
        return ans;
    }
};