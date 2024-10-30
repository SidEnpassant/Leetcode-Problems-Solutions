class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      vector<int> pums;
      int n = nums.size();
      for(int i = 0 ; i < n ; i++){
        if(pums.size() == 0 || pums[0] != nums[i]){
            int count = 0;
            for(int j = 0 ; j < n ; j++){
                if(nums[j] == nums[i]){
                    count++;
                }

            }
            if(count > n/3){
                pums.push_back(nums[i]);
            }
            if(pums.size() == 2) break;
        }
      }
      return pums;
    }
};