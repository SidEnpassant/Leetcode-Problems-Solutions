// BRUTE FORCE - TLE
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxLen = 0;
//         for(int i = 0 ; i < nums.size() ; i++){
//             int zeros = 0;
//             for(int j = i ; j < nums.size() ; j++){
//                 if(nums[j] == 0){
//                     zeros++;
//                 }
//                 if(zeros <= k){
//                     int len = j - i + 1;
//                     maxLen = max(maxLen , len);
//                 }else{
//                     break;
//                 }
//             }
//         }
//         return maxLen;
//     }
// };


// OPTIMIZED TWO POINTER AND SLIDING WINDOW
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0 , l = 0 , r = 0;
        int zeros = 0;
        while(r < nums.size()){
            if(nums[r] == 0) zeros++;
            while(zeros > k){
                if(nums[l] == 0) zeros--;
                l++;
            }
            if(zeros <= k){
                int len = r - l + 1;
                maxLen = max(maxLen , len);
                r++;
            }
        }
        return maxLen;
    }
};