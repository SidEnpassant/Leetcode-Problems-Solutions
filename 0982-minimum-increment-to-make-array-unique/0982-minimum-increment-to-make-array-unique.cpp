class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        auto i = 0;
        auto count = 0;
        for(auto n : nums){
            i = max(i , n);
            count += i++ - n;
        }
        return count;
    }
};