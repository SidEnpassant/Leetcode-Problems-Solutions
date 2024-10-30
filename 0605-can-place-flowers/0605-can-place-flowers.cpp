class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      
        int s = flowerbed.size();
         if(n==1 && s==1 && flowerbed[0]==0){
            return true;
        }
         if(s>1 && flowerbed[0]==0 && flowerbed[1]==0)
        {
            n--;
            flowerbed[0]=1;
        }
        for (int i = 1; i <s-1; i++) {
            if (flowerbed[i-1]==0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                
                flowerbed[i] = 1;
                n--;
                
            }
            
        }
        if(s>1 && flowerbed[s-1]==0 && flowerbed[s-2]==0)
        {
            n--;
        }
        if(n <= 0) {
            return true;
        }
        return false;
      
    }
};