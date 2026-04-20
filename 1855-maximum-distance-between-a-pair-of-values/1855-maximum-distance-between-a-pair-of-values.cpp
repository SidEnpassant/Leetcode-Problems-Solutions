class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int result = 0;

        for(int i = 0 , j = 0 ; i < n1 && j < n2 ;){
            if(i <= j && nums1[i] <= nums2[j]) {
                result = max(result , (j - i));
                j++;
            }
            else if(i <= j){
                i++;
            }
            else j++;
        }

        return result;
    }
};