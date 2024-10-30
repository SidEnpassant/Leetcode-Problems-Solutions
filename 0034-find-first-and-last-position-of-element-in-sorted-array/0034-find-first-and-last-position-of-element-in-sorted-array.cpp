class Solution {
public:
   std::vector<int> searchRange(std::vector<int>& nums, int target) {
    std::vector<int> posi = {-1, -1};

    //if(nums.size() < 3)  

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
           
            if (posi[0] == -1) {
                posi[0] = i;  
            }
              posi[1] = i; 
             
        }
    }

    return posi; 
   }
};