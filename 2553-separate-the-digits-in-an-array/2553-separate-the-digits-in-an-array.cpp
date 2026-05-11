class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;

        for(auto num : nums){
            string str = to_string(num);
            for(auto stri : str){
                string s(1 , stri);//creating a string with one occurence of stri  // THIS APPROACH TAKES MORE TIME
                //int res = stri - '0'; // converting the character digit to an integer as characters are stored using ASCII values // THIS APPROACH TAKES LESS TIME
                int res = stoi(s);
                result.push_back(res);
            }
        }
        return result;
    }
};