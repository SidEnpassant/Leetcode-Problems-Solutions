class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> first;
        vector<int> second;
        vector<int> result;

        //sort(nums.begin() , nums.end());
        for(int x : nums){
            if(x >= 0){
                first.push_back(x);
            }else{
                second.push_back(x);
            }
        }
       // int n = max(first.size() , second.size());
       for (int i = 0; i < first.size(); ++i){
        if (i < first.size()) {
            result.push_back(first[i]);
        }
        if (i < second.size()) {
            result.push_back(second[i]);
        }
    }   
    return result;       

    }
};