class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        if(arr.size() < 3)
        return false;
        for(int i = 0 ; i< arr.size()-2 ; i++){
           if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1)
                return true;
        }
       return false;      
    }
};