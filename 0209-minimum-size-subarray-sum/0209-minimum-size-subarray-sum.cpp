// --------- BRUTE FORCE ------------ //
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int minLen = INT_MAX;

//         for (int i = 0; i < n; i++) {
//             int sum = 0;

//             for (int j = i; j < n; j++) {
//                 sum += nums[j];

//                 if (sum >= target) {
//                     minLen = min(minLen, j - i + 1);
//                     break;
//                 }
//             }
//         }

//         return (minLen == INT_MAX) ? 0 : minLen;
//     }
// };



//// ------------------- OPTIMIZED APPROACH ----------------------//////////
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLenWindow = INT_MAX;
        int currentSum = 0;

        int low = 0;
        int high = 0;

        while(high < nums.size()){
            currentSum += nums[high];
            high++;
            while(currentSum >= target){
                int currentWindowSize = high - low;

                minLenWindow = min(minLenWindow ,currentWindowSize);

                currentSum = currentSum - nums[low];
                low++;
            }

        }

        if(minLenWindow == INT_MAX) return 0;
        else return minLenWindow;

    }
};
