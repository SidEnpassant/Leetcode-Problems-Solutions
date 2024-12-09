class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int largest=INT_MIN; 
        int index=0; 
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                largest = nums[i];
                index = i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==largest) continue; 
            else if(nums[i]>(largest/2)) return -1;
        }
        return index;
    }
};