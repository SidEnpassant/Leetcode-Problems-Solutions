class Solution {
public:
    int functiontoFind(vector<int>& nums, int goal){
        int l = 0 , sum = 0 , count = 0 ;
        if(goal < 0) return 0;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            while(sum > goal){
                sum = sum - nums[l];
                l = l + 1;
            }
            count += (r - l + 1);
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return functiontoFind(nums , goal) - functiontoFind(nums , goal - 1);
    }
};