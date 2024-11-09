class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int size = sizeof(nums) / sizeof(nums[0]);
        if(size == 1) {return 0;} 

        sort(nums.begin(), nums.end(), greater<int>());
        
        int recentDif = 0;
        int maxDif = 0;
        int n = nums.size();
        for(int i = 0 ; i < n-1 ; i++){
            recentDif = nums[i] - nums[i+1];
            maxDif = max(recentDif , maxDif);
        }
        return maxDif;
    }
};