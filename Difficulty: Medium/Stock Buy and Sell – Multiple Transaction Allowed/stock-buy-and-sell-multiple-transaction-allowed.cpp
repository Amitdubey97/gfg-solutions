class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        vector<int> ans;
        int n = prices.size();
        int currentMax = 0;
        for(int i=0; i < n - 1;i++){
            if(prices[i] < prices[i+1]){
            currentMax += prices[i+1] -prices[i];
            }  
        }
        return currentMax;
    }
};
