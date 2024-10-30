class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> num_map;

        for (int i = 0; i < numbers.size(); ++i) {
            int complement = target - numbers[i];

            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement] + 1, i + 1};
            }

            
            num_map[numbers[i]] = i;
        }

        
        return {};
    }
};