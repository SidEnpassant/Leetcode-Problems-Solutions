class Solution {
public:
    string losingPlayer(int x, int y) {
        int turn;
        for(turn = 0  ; ; turn ++){
            if(x>=1 && y>=4){
                x = x - 1;
                y = y - 4;
            }
            else break;
        }
        if(turn % 2 == 0) return "Bob";
        else return "Alice";
        
    }
};