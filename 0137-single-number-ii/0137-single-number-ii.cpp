class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            bool duplicate = false;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i != j) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate)
                return nums[i];
        }
        return -1;
    }
};