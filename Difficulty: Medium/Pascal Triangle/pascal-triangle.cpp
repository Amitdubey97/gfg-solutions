class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>result;
        int ans = 1;
        result.push_back(ans);
        
        for(int i =1;i<n;i++){
            ans = ans*(n-i);
            ans = ans/i;
            result.push_back(ans);
        }
        return result;
    }
};
