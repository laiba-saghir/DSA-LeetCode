class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
       // sort(nums.begin(),nums.end());
        int i = 0;
        int j = 0;
        while(j < n){
            if(nums[j]){
                  swap(nums[i],nums[j]);
             i++;
             }
           
              j++;
             
            }
        }
         
    
};