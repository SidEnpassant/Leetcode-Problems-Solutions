class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 100000001) return false;
        float a = sqrt(num);
        
   
    string str = to_string(a);  
        
        
      int pos = str.find('.');

    
    for(int i = pos+1 ; i<str.length(); i++){
        
        if(str[i
] != '0')
        return false;
       
        }
     

return true;

        

        
    }
};