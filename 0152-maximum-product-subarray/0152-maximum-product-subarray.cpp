class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestmin = nums[0];
        int bestmax = nums[0];
        int ans = nums[0];
        for(int i=1;i< nums.size();i++){
            int v1 = nums[i];
            int v2 = bestmin*nums[i];
            int v3 = bestmax*nums[i];
            bestmin = min(v1,min(v2,v3));
            bestmax = max(v1,max(v2,v3));
            ans = max(ans,max(bestmin,bestmax));
        
        }
        return ans;
    }
};