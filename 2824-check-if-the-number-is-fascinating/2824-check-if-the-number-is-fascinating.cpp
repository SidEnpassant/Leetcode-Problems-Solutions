class Solution 
{
public:
    bool isFascinating(int n) 
    {
        int n2=2*n;
        int n3=3*n;
        string s=to_string(n)+to_string(n2)+to_string(n3);
        set<char> st;
        for(auto ch: s) 
        {
            if(ch=='0') return false;
            st.insert(ch);
        }
        return st.size()==9 && s.size()==9;
    }
};