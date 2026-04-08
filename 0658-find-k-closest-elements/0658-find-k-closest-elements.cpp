class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0;
        int high = arr.size()-1;

        while(high - low >= k){
            if(abs(arr[low] - x) > abs(arr[high] - x)){
                low++;
            }else{
                high--;
            }
        }
        vector<int> result;
            for(int i = low ; i <= high ; i++){
                result.push_back(arr[i]);
            }
            return result;
    }
};