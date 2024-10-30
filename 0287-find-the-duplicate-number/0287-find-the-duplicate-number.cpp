class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ranges::sort(nums);
        for(int i = 1 ; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) return nums[i];
        }
        return 0;
    }
};