class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;
        int totalSum = 0;

        for (int num : nums) {
            totalSum += num;
            if (num < 10) {
                singleDigitSum += num;
            } else {
                doubleDigitSum += num;
            }
        }
        if (singleDigitSum > (totalSum - singleDigitSum)) {
            return true;
        }
        if (doubleDigitSum > (totalSum - doubleDigitSum)) {
            return true;
        }
        return false;
    }
};