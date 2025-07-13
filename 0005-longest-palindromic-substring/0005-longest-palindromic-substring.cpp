class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int low=0,high=0;
        int next=n;
        int mx=1;
        string s2="";
        int st=0,fn=0;
        while(low<n){
            for(int i=low;i<n;i++){
                if(s[i]!=s[low]){
                    next=i;
                    break;
                }
                else{
                    high=i;
                }
            }
            next=high+1;
            while(low>=0 && high<n){
                if(s[low]==s[high]){
                    low--;
                    high++;
                }
                else{
                    break;
                }
            }
            if(high-low-1>mx){
                st=low+1,fn=high-1;
                mx=high-low-1;
            }
            low=next;
        }
        for(int i=st;i<=fn;i++){
            s2+=s[i];
        }
        return s2;
    }
};