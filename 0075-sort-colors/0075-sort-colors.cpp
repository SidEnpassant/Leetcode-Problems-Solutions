class Solution {
public:
    void sortColors(vector<int>& nums) {
      int i , j , temp;
      for(i=0;i<=nums.size()-1;i++){
        j=i;
        while(j>0){
            if(nums[j-1]>nums[j]){
            temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            }
            j--;
        }
      }
        
    }
};