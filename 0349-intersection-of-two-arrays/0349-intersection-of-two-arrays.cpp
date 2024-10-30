class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums3(nums1.begin(),nums1.end());
        unordered_set<int> nums4;
        for(int g : nums2){
            if(nums3.count(g)){
                nums4.insert(g);
            }
        }
        return vector<int>(nums4.begin(),nums4.end());
    }
};

