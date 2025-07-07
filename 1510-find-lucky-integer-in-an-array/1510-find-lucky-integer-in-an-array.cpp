class Solution {
public:
    int findLucky(vector<int>& arr) {
        int a[501] = {};

        for(int i: arr) a[i]++;
        for(int f = 500; f >= 1 ; f--){
            if(a[f] == f) return f;
        }
        return -1;
    }
};