class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int right = 0;
        int left = 0;

        while(right < n){
            if(nums[right] % 2 == 0){
                swap(nums[right] , nums[left]);
                left++;
            }
            right++;
        }
        return nums;
    }
};