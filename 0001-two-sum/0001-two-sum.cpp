class Solution {
public:
vector<int> twoSum(vector<int>& nums,int target) {
  map<int,int> m;
  vector<int> result(2);
  for(int i=0;i<nums.size();i++){
    m[nums[i]]=i;
  } 
  for(int i=0;i<nums.size();i++){
    int temp=target-nums[i];
    if(m.find(temp)!=m.end()&&i!=m[temp]){
     result[0]=min(i,m[temp]);
     result[1]=max(i,m[temp]);
     break;
    }
  }
 return result;
}

};