class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>arr2;
        for(int i = 0; i<n; i+=2){
          arr2.push_back(arr[i]); 
        }
        return arr2;
    }
};