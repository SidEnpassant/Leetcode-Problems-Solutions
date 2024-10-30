class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        sort(nums.begin() , nums.end() , greater<int>()); 
        vector<int> chums;

        int n = nums.size();

        chums.push_back(nums[0]);

        for(int i = 1 ; i < n ; i++){
            if(nums[i] != nums[i-1]){
                chums.push_back(nums[i]);
            }
        }
        //sort(chums.begin() , chums.end());
        if(chums.size()<3){
            return chums[0];
        }
        return chums[2];
        
        
    }
};


