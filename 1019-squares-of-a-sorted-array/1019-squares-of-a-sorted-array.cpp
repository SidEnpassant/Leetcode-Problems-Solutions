class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //vector<int> nums1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
           // if(nums[i] < 0){
                nums[i] = (nums[i] * nums[i]);
            //}
        }
        sort(nums.begin() , nums.end());
        return nums;
    }
};