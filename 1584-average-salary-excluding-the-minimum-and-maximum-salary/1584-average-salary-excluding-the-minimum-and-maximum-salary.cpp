class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double sum =  0 , count = 0 , f;
        sort(salary.begin() , salary.end());
        for(int i = 1 ; i < n-1 ; i++){
            sum = sum + salary[i];
            count++;
        }
        f = (sum/count);
        return f;
    }
};