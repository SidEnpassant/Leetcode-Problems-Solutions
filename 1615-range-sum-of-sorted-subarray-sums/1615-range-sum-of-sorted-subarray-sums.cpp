class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int size = n * (n + 1) / 2;
        int rupam[size];
        int i, j, k = 0, sum2=0 , chonku = 0;
        for (i = 0; i <n ; i++){
            int sum = 0;
            for(j = i ; j<n ; j++){
                sum = sum + nums[j];
                rupam[k] = sum;
                k++;
            }
        }
        chonku = pow(10,9) + 7;
        sort(rupam , rupam + size);
                for(int j = left-1 ; j < right ; j++){
                    sum2 = sum2 + rupam[j]; 
                    sum2 = sum2 % chonku;
                }
            return sum2;
    }
};
