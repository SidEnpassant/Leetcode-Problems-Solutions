class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int n , m;
        n = nums[size-1]*nums[size-2]*nums[size-3];
        m = nums[0]*nums[1]*nums[size-1];

        if(m>n) return m;
        else return n;
       
    }
};