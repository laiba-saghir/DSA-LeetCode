class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int sum = 0;
       // vector<int> prefix(n,0);
        for(i = 0;i< n;i++){
            sum += nums[i];
        }
        int left = 0;
        for(i = 0;i<n;i++){
            int right = sum - left - nums[i];
            if(left == right) return i;
            left = left + nums[i];
        }

        return -1;
    }
};