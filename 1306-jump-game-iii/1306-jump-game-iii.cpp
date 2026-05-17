class Solution {
public:
    bool canReach(vector<int>& nums, int start) {
        int n=nums.size();
        vector<int>vis(n,0);
        queue<int>q;
        q.push(start);
        vis[start]=1;

        while(!q.empty())
        {
            int x=q.front();
            q.pop();

            if(nums[x]==0)return true;
            
            if(x-nums[x]>=0 && x-nums[x]<n && vis[x-nums[x]]==0)
            {
                q.push(x-nums[x]);
                vis[x-nums[x]]=1;
            }
            if(x+nums[x]>=0 && x+nums[x]<n && vis[x+nums[x]]==0)
            {
                q.push(x+nums[x]);
                vis[x+nums[x]]=1;
            }
        }
        return false;
    }
};