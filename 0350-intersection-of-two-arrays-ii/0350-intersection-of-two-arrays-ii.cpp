class Solution {
public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
    // Always iterate over the smaller array first to optimize memory usage.
    if (nums1.size() > nums2.size())
      return intersect(nums2, nums1);

    vector<int> ans;
    unordered_map<int, int> count;

    // Count the occurrences of each element in the smaller array.
    for (const int num : nums1)
      ++count[num];

    // Check for intersection and build the result.
    for (const int num : nums2)
      if (count[num]-- > 0)
        ans.push_back(num);

    return ans;
  }
};