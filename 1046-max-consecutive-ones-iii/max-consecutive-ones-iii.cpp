class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int high =0,low=0;
        int n = nums.size();
        int res = INT_MIN;
        int zero = 0;
        unordered_map<int,int> f;
       for(high=0;high<n;high++){
        if(nums[high] == 0)   zero++;
       
        while(zero > k){
            if(nums[low]==0) zero--;
               low++;
        }
        int len = high-low+1;
        res = max(res,len);
       }
       return res;
    }
};