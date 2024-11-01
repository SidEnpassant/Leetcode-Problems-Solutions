class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        vector<int> temp;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            } else {
                k++;
            }
        }

        while (k--) {
            temp.push_back(0);
        }

        copy(temp.begin(), temp.end(), nums.begin());
    }
};
