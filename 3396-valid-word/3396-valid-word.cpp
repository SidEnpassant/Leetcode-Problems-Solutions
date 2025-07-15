class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) return false;

        bool acheKiVowel = false;
        bool acheKiConstant = false;

        for(char charac : word){
            if(!isalnum(charac)) return false;


            if(isalpha(charac)){

                char lowecase = tolower(charac);
                if(lowecase == 'a' || lowecase == 'e' || lowecase == 'i' || lowecase == 'o' || lowecase == 'u') {
                    acheKiVowel = true;
                }
                else
                {
                    acheKiConstant = true;
                }

            }
            
            //if(acheKiVowel && acheKiConstant) continue;
        }
        return(acheKiVowel && acheKiConstant);
    }
};