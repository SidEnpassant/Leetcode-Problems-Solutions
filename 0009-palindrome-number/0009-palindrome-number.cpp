class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long reverseNum = 0;
        long long temp = x;

        while(temp !=0)
        {
            int lastdigit = temp %10;
             reverseNum = (reverseNum * 10) + lastdigit;
            temp = temp / 10;

           
        }  

        return (reverseNum == x);
    }
};