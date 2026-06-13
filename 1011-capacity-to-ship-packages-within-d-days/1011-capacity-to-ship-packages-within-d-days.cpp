// minimum capacity we should consider 


//optimized
class Solution {
public:

    int func(vector<int>& weights, int cap){
        int day = 1 , load = 0;
        for(int i = 0 ; i < weights.size() ; i++){
            if(load + weights[i] > cap){
                day = day + 1;
                load = weights[i];
            }
            else{
                load = load + weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end());
        int high = accumulate(weights.begin() , weights.end() , 0);
        int mid = 0;
        while(low <= high){
            mid = (low + high)/2;
            int noofdays = func(weights , mid);
            if(noofdays <= days){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};