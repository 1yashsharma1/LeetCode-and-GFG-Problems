class Solution {
public:
int majorityElement(vector<int> &nums)
{
  int cnt=0,element=0;
  for(int res:nums){
    if(cnt==0)
      element=res;
    if(element==res)
      cnt+=1;
    else
      cnt-=1;  
  } 
  return element;
}      

};