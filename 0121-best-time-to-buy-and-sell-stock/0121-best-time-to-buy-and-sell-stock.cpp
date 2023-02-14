class Solution {
public:
    int maxProfit(vector<int>& prices) {
 int min_value=prices[0],max_profit=0;
 for(int i=1;i<prices.size();i++){
  if(min_value-prices[i]>0){
    min_value=min(min_value,prices[i]);
  }
  else if(min_value-prices[i]<0){
    max_profit=max(max_profit,prices[i]-min_value);
  }
 }
 return max_profit;
}
};