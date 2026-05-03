// EXTREME BRUTE FORCE - TLE O(N x N)

// class Solution {
// public: 

//     bool linearSearch(vector<int>& nums,int x){
//         for(int i = 0 ; i < nums.size() ; i++){
//             if(nums[i] == x) return true;
//         }
//         return false;
//     }
//     int longestConsecutive(vector<int>& nums) {
//         int longest = 1;
//         if(nums.size() == 0) return 0;

//         for(int i = 0 ; i < nums.size() ; i++){
//             int count = 1;
//             int x = nums[i];
           
//             while(linearSearch(nums,x+1) == true){
//                 x = x + 1;
//                 count = count + 1;
//                 longest = max(longest, count);
//             }
//         }
//         return longest;
//     }
// };


// BETTER APPROACH
class Solution {
public: 

    
    int longestConsecutive(vector<int>& nums) {
        int longest = 1;
        int n = nums.size();
        int countCurr = 0;
        int lastSmaller = INT_MIN;

        sort(nums.begin() , nums.end());
        if(n == 0) return 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] - 1 == lastSmaller){
                countCurr = countCurr + 1;
                lastSmaller = nums[i];
            }else if(nums[i] != lastSmaller){
                countCurr = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest , countCurr);
        }
        return longest;
    }
};