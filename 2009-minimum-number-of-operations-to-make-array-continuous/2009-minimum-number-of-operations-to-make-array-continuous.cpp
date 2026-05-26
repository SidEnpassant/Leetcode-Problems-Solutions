class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        // Remove duplicates
        vector<int> uniqueNums;
        uniqueNums.push_back(nums[0]);

        for(int i = 1; i < n; i++) {
            if(nums[i] != nums[i - 1]) {
                uniqueNums.push_back(nums[i]);
            }
        }

        int m = uniqueNums.size();
        int ans = n;

        int j = 0;

        for(int i = 0; i < m; i++) {

            while(j < m && uniqueNums[j] < uniqueNums[i] + n) {
                j++;
            }

            int windowSize = j - i;

            ans = min(ans, n - windowSize);
        }

        return ans;
    }
};