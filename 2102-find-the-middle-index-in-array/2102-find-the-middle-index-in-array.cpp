class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int RightSum = 0;
        int LeftSum = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            RightSum += nums[i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(i == 0) LeftSum = 0;
            else LeftSum += nums[i-1];
            RightSum -= nums[i];
            if(RightSum == LeftSum) return i;
        }
        return -1;
    }
};