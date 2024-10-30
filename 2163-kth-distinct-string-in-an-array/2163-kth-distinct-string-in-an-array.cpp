using namespace std;
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
    int i , j , n = arr.size() , c = 0;
    for(i = 0 ; i < n ; i++){
        int count = 0;
        for(j = 0 ; j < n ; j++){
            if(arr[i] == arr[j]) count++;
        }
        if(count == 1) c++;
        if(c == k) return  arr[i];
    }
    
    return "";
    }
};