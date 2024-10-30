class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 , j = 1 , n = nums.size(); 
        for(int i = 0 ; i < n ; i++){
            sum = sum + j - nums[i];
            j++;
        }
        return sum;
    }
};