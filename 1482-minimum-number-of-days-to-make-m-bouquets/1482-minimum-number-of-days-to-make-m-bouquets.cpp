////// - BRUTE FORCE - TLE

// class Solution {
// public:
//     bool possible(vector<int>& bloomDay , int day , int m, int k){
//         int count = 0;
//         int size = bloomDay.size();
//         int noOfBouquets = 0;
//         for(int i = 0 ; i < size ; i++){
//             if(bloomDay[i] <= day){
//                 count++;
//             }else{
//                 noOfBouquets += (count/k);
//                 count = 0;
//             }
//         }
//         noOfBouquets += (count/k);
//         if(noOfBouquets >= m) return true;
//         else return false;
//     }
//     int minDays(vector<int>& bloomDay, int m, int k) {
//         if(bloomDay.size() < m * k) return -1;
//         int mini = *min_element(bloomDay.begin() , bloomDay.end());
//         int maxi = *max_element(bloomDay.begin() , bloomDay.end());
        
//         for(int i = mini ; i <= maxi ; i++){
//             if(possible(bloomDay, i,m,k) == true) return i;
//         }
//         return -1;
//     }
// };



//// ---- OPTIMIZED ------ 

class Solution {
public:
        bool possible(vector<int>& bloomDay , int day , int m, int k){
        int count = 0;
        int size = bloomDay.size();
        int noOfBouquets = 0;
        for(int i = 0 ; i < size ; i++){
            if(bloomDay[i] <= day){
                count++;
            }else{
                noOfBouquets += (count/k);
                count = 0;
            }
        }
        noOfBouquets += (count/k);
        if(noOfBouquets >= m) return true;
        else return false;
    }
    int binarySearch(vector<int>& bloomDay, long long int m, long long int k){
        if(bloomDay.size() < m * k) return -1;
        int low = *min_element(bloomDay.begin() , bloomDay.end());
        int high = *max_element(bloomDay.begin() , bloomDay.end());
        int ans = high;

        while(low <= high){
            int mid = (low + high)/2;
            if(possible(bloomDay, mid,m,k) == true) {
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       return binarySearch(bloomDay,m,k);
    }
};