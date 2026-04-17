class Solution {
public:
    int reverseNumber(int x){
        int y = 0;
        while(x > 0){
            y = y * 10 + x % 10;
            x /= 10;
        }
        return y;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int , int> mpp;

        int result = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            if(mpp.count(nums[i])){
                result = min(result , i - mpp[nums[i]]);
            }
            mpp[reverseNumber(nums[i])] = i;
        }
        return result == INT_MAX ? -1 : result;
    }
};