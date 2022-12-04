class Solution {
public:
int myAtoi(string s) {
   int sign=1;
   int flag=0;
   int i=0;
   int res=0;
   
  while(flag==0)
  {
    if(s[i]=='-'||s[i]=='+'||isdigit(s[i]))
    {
     s=s.substr(i,s.length());
      break;
    }
    if(s[i]==' ')
    {
     
    }
    else{
      return 0;
    }
    i++;
  }
 
  i=(s[0]=='+'||s[0]=='-')?1:0;
  sign=(s[0]=='-')?-1:1;
  string newString=s;
  
  for(i;i<newString.length();i++)
  {
    if(s[i]==' '||!isdigit(s[i]))
    {
      break;
    }
    int temp=(newString[i]-'0')*sign;
    if((sign==1)&&((res==INT_MAX/10&&temp>=7)||(res>INT_MAX/10)))
    {
      return INT_MAX;
    }
    if((sign==-1)&&((res==INT_MIN/10&&temp<=-8)||(res<INT_MIN/10)))
    {
      cout<<res;
      return INT_MIN;
    }
    res=res*10+temp;
  }
  return res;
    }
};