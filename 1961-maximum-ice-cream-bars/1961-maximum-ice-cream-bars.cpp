class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int sum = 0 , count = 0;

        //if(costs[0] > coins) return 0;

        for(int i = 0 ; i < costs.size() ; i++){
            
            if(sum + costs[i] <= coins){
                sum += costs[i];
                count ++;
            }else{
                break;
            }
        }
        return count;
    }
};


