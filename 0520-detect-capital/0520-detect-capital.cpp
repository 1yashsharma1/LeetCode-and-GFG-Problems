class Solution {
public:
bool detectCapitalUse(string word) {
       int capitalCount=0;
       int starting;
       if(isupper(word[0]))
       {
          starting=1;
       }
       else{
        starting=0;
       }
       for(int i=0;i<word.length();i++)
       {
        if(isupper(word[i]))
        {
          capitalCount++;
        }
       }
       if(capitalCount==0||(capitalCount==1&&starting==1)||capitalCount==word.length())
       {
        return true;
       }
       return false;
        
    }
};