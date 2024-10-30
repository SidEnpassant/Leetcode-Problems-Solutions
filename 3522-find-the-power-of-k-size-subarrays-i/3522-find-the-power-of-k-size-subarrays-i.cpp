class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> results;
        int n = nums.size();

      for (int i = 0; i <= n - k; ++i) {
        bool consec_sorted = true;

        for (int j = 0; j < k - 1; ++j) {
            if (nums[i + j] + 1 != nums[i + j + 1]) {
                consec_sorted = false;
                break;
            }
        }

        if (consec_sorted) {
            results.push_back(*max_element(nums.begin() + i, nums.begin() + i + k));
        } else {
            results.push_back(-1);
        }
    }
    return results;
    }
};
