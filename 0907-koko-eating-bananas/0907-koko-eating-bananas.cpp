class Solution {
public:
  //  int findMax(vector<int> vec){
   //     int n = vec.size();
   //     int maxu = INT_MIN;
   //     for(int i = 0 ; i < n ; i++){
  //          maxu = max(maxu , vec[i]);
  ///      }
   //     return maxu;
  //  }
    int minEatingSpeed(vector<int>& piles, int h) {
        //if(piles == [805306368,805306368,805306368]) return 3;
        int max = *max_element(piles.begin(), piles.end());
        int low = 1 , high = max;
        while(low <= high){
            int mid = (low + high)/2;
            long long totalHrs = func(piles ,mid);
            if(totalHrs <= h){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;        
    }
    long long func(vector<int> &chiles , int hourly){
        int n = chiles.size();
        long long totalHours = 0;
        for(int i = 0 ; i < n ; i++){
            totalHours += ceil((double)chiles[i] / (double)hourly);
        }
        return totalHours;
    }
};