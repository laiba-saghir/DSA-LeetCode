class Solution {
public:
    int minans(vector<int>& num){
        int bestend = num[0];
        int ans = num[0];
        for(int i = 1;i < num.size();i++){
            int v1 = bestend + num[i];
            int v2 = num[i];
            bestend = min(v1,v2);
            ans  = min(ans,bestend);
        }
        return ans;
    }
    int maxans(vector<int>& num){
        int bestend = num[0];
        int ans = num[0];
        for(int i = 1;i < num.size();i++){
            int v1 = bestend + num[i];
            int v2 = num[i];
            bestend = max(v1,v2);
            ans  = max(ans,bestend);
        }
        return ans;
    }
    int sumofarray(vector<int> & nums){
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n;i++){
            sum = sum + nums[i];
        }
        return sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int min_val = minans(nums);
        int max_val = maxans(nums);
        int sum = sumofarray(nums);
        int maxcircular = sum - min_val;
        if(max_val < 0) return max_val;
        
        int ans = max(maxcircular,max_val);
        return ans;
        }    
};