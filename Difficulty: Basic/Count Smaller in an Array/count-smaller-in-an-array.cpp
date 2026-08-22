class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // code here
        int n = arr.size();
        int cnt = 0;
        for(int i =0; i<n ; i++){
            if(arr[i]<= x){
                cnt++;
            }
        }
        return cnt;
    }
};