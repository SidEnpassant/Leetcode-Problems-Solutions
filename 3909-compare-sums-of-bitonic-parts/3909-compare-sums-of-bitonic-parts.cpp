class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
       int n = nums.size();

        int maxi = *max_element(nums.begin(), nums.end());
        int x = max_element(nums.begin(), nums.end()) - nums.begin();

        long long int sum1 = 0, sum2 = 0;

        for(int i = 0; i <= x; i++){
            sum1 += nums[i];
        }

        for(int i = x; i < n; i++){
            sum2 += nums[i];
        }

        if(sum1 > sum2) return 0;
        else if(sum2 > sum1) return 1;
        else return -1;
    }
};