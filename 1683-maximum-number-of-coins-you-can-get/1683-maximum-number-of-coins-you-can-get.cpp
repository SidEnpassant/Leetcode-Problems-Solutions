class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sz = piles.size(), myPtr = sz-2, bobPtr = 0; 
        int myCoins = 0;
        while(myPtr > bobPtr){
            bobPtr++;
            myCoins += piles[myPtr];
            myPtr -= 2;
        }
        return myCoins;
    }
};