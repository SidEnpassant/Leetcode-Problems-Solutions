class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0 , i , j , k , n = rating.size();
        for(i = 0 ; i< n ; i++){
            for(j= i+1 ; j< n ; j++){
                for(k = j+1 ; k< n ; k++){
                   if ((rating[i] > rating[j] && rating[j] > rating[k]) || (rating[i] < rating[j] && rating[j] < rating[k])){
                        count++;
                    }
                }

            }
        }
        return count;
    }
};