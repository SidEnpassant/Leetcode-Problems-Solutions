class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int maxConse = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1]) {
                count++;
                }else{
                    maxConse = max(maxConse , count);
                    count = 1;
                }
        }
        return max(maxConse , count);
    }
};

