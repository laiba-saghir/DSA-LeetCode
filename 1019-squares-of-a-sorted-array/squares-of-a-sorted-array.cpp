class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n= nums.size();
        vector<int> result(n);
        int i = 0;
        int j = n-1;
        int k = n-1;
        while(i <= j){
            int left = nums[i]*nums[i];
            int right = nums[j] * nums[j];
            if(left > right){
                result[k] = left;
                i++;
            }
            else{
                result[k] = right;
                j--;
            }
            k--;
        }
        return result;
    }
};