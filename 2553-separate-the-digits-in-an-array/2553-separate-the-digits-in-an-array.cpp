class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;

        for(auto num : nums){
            string str = to_string(num);
            for(auto stri : str){
                int res = stri - '0'; // converting the character digit to an integer as characters are stored using ASCII values
                result.push_back(res);
            }
        }
        return result;
    }
};