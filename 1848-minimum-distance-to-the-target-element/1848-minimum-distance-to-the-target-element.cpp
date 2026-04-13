class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                n = min(n , abs(i - start));
            }
        }
        return n;
    }
};