class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int maxConse = 0;
        for(int x : nums){
            if(x == 1) {
                count++;
                }else{
                    maxConse = max(maxConse , count);
                    count = 0;
                }
        }
        return max(maxConse , count);
    }
};