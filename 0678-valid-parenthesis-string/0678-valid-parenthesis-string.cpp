// ----- BRUTE FORCE TLE ------ \\ 

// class Solution {
// public:
//     bool actualFunction(string& s , int index , int count){
//         if(count < 0) return false;
//         if(index == s.size()){
//             return(count == 0);
//         }
//         if(s[index] == '('){
//             return actualFunction(s , index + 1 , count + 1);
//         }
//         if(s[index] == ')'){
//             return actualFunction(s , index + 1 , count - 1);
//         }
//         return actualFunction(s , index + 1 , count + 1) or actualFunction(s , index + 1 , count - 1) or actualFunction(s , index + 1 , count);
//     }
//     bool checkValidString(string s) {
//         int count = 0;
//         return actualFunction(s , 0 , count);
//     }
// };

class Solution {
public:
    bool checkValidString(string s) {
        int min = 0 , max = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                min = min + 1;
                max = max + 1;
            }else if(s[i] == ')'){
                min = min - 1;
                max = max - 1;
            }
            else{
                min = min - 1;
                max = max + 1;
            }
            if(min < 0) min = 0;
            if(max < 0) return false;
        }
        return(min == 0);
    }
};