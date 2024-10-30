class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;

        for(auto i:nums1){
            nums3.push_back(i);
        }
         for(auto j:nums2){
            nums3.push_back(j);
        }
        sort(nums3.begin() , nums3.end());

        int n = nums3.size();
       
        //double median;

        if(n % 2 == 0){
            return (nums3[n/2-1] + nums3[n/2])/2.0;
        }
        //else{
        //    median = nums3[x/2];
       // }

        return nums3[n/2];
 
    }
};