class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() , i;
        int g = *max_element(nums.begin() , nums.end());
        for(i = 0 ; i < n ; i++) {
        if(nums[i] == g) return i;}
        return i;
    }
};