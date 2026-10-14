class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int sum = 0;
        unordered_map<int,int> f;
       f[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int ques = sum - k;
            int freq = f[ques];
            res += freq;
            f[sum]++;
        }
        return res;
    }
};