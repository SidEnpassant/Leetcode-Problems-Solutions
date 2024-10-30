class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        if(nums.size()==1){
        return nums[0];
        }
        sort(nums.begin(),nums.end());
        int sum=0;
        int i=0;
        while(i<nums.size()){
            if(i==0){
                if(nums[i]!=nums[i+1]){
                    sum+=nums[i];
                }
            }
            else if(i==nums.size()-1){
                if(nums[i]!=nums[i-1]){
                    sum+=nums[i];
                }
            }
            else{
                if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1]){
                    sum+=nums[i];
                }
            }
            i++;
        }
        return sum;
    }
};