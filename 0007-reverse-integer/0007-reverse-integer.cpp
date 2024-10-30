class Solution {
public:
    int reverse(int x) {
        long long int reverseNum = 0, lastdigit;
        while(x!=0)
        {
            lastdigit = x%10;

            x= x /10;

            reverseNum = (reverseNum * 10)+lastdigit;
            
        }
        if(reverseNum>= pow(-2,31) && reverseNum< (pow(2,31)))
        return (int)reverseNum; 
        else 
        return 0;
        
    }
};