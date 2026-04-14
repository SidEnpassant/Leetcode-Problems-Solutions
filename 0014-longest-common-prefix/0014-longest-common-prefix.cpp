class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string finalString ="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return finalString;
            }
            finalString+=first[i];
        }
        return finalString;
    }
};