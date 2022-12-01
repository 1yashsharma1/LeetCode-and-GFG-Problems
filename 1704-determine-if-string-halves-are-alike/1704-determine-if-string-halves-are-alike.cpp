class Solution {
public:
   int vowelCount(string s, int start,int end){
 int cnt=0;
  for(int i=start;i<=end;i++)
  {
    if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
      cnt++;
    }
    
  }
return cnt;
}


bool halvesAreAlike(string s) {
  int flag1=vowelCount(s,0,(s.length()/2)-1);
  int flag2=vowelCount(s,s.length()/2,s.length()-1);

    if(flag1==flag2)
    {
      return 1;
    }
    return 0;

    }
};