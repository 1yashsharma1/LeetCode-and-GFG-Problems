class Solution {
public:
int power(int n)
{
  int sum=0;
   int var=n;
   while(var>0)
   {
    int temp=var%10;
    sum+=pow(temp,2);
    var=var/10;
   }
   cout<<sum;
   return sum;
}

bool isHappy(int n) {
 bool result=0;
 int ans=0;
 while(ans!=1&&!(ans<=9&&ans>=2)){
    ans=power(n);
    if(ans>9)
    {
      n=ans;
    }
 }  
    if(ans==1||ans==7)
    {
      return 1;
    }
    return 0;
}
};