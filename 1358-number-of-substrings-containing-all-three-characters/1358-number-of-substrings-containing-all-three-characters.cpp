// BRUTE FORCE

// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         vector<int> hash {3,0};
//         int count;
//         for(int i = 0 ; i < s.size() ; i++){
//             for(int j = i ; j < s.size() ; j++){
//             hash[s[j] - 'a'] = 1;
//             if(hash[0] + hash[1] + hash[2] == 3){
//                 count = count + (s.size() - j);
//                 break;
//              }
//             }
//         }
//         return count;
//     }
// };


// OPTIMIZED
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> lastSeen(3,-1);
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            lastSeen[s[i] - 'a'] = i;
            if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1){
                count = count + (1 + min({lastSeen[0] ,lastSeen[1] ,lastSeen[2]}));
            }
        }
        return count;
   }
};