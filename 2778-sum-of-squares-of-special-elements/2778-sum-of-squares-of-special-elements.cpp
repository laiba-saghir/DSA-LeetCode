class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int special = 0;
        for(int i =0;i < nums.size();i++){
            if(n%(i+1)== 0) {
               // nums[i] = special;
                special += nums[i]*nums[i];
            }
            
        }
        return special;
    }
};