class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numberOfSubarraysActualSolve(nums , k) - numberOfSubarraysActualSolve(nums , k - 1);
    }
    int numberOfSubarraysActualSolve(vector<int>& nums, int k) {
        int l = 0 , r = 0 , sum = 0 , count = 0;
        while(r < nums.size()){
            sum += (nums[r] % 2);
            while(sum > k){
                sum = sum - (nums[l] % 2);
                l = l + 1;
            }
            count = count + (r - l + 1);
            r = r + 1;
        }
        return count;
    }
};