class Solution {
public:
    int maximumLength(vector<int>& nums) {
       // sort(nums.begin() , nums.end());
        int even = 0 , odd = 0;
        for(int i : nums){
            if(i % 2 == 0) even++;
            else odd++;
        }

        int altOdd = 0 , altEven = 0;
        for(int p : nums){
            if(p % 2 == 0) altEven = max(altEven , altOdd + 1);
            else altOdd = max(altOdd , altEven + 1);
        }

        return max({odd , even , altOdd , altEven});
    }
};

