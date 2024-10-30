class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int,int>> player_pick(n);
        for(auto& p : pick){
            int player = p[0];
            int colour = p[1];
            player_pick[player][colour]++;
        }
        int win = 0 ;
        for(int i = 0 ; i < n ; i++){
            int maxColour = 0;
            for(auto& t : player_pick[i]){
                maxColour = max(maxColour , t.second);
            }
            if(maxColour > i)
            win++;
        }
        return win;

    }
};