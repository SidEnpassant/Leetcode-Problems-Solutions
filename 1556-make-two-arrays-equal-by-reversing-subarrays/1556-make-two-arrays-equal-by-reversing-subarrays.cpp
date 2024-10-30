class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin() , arr.end());
        int n = target.size() , m = arr.size();

        if(n != m) return false;

        for(int i = 0 ; i< n ; i++){
            if(target[i] != arr[i]) return false;
        }
        return true;
    }
};