class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int>m;
        for(auto &i:nums){
        m[i]++;
    }
        int count=0;
        int max_freq=INT_MIN;
        for(auto &it:m){
        if(it.second>max_freq)
        max_freq=it.second;
    }
        for(auto &i:m){
          if(i.second==max_freq)
         count+=max_freq;
    }
        return count;
        
    }
};