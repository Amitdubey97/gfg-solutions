class Solution { // arr = 12345
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size(); // n = 5
        // code here
   for(int i =0; i<n; i +=k){ // [1 2 3]
       int end = min(i+k,n); //min(3 +3, 5) = 5 so, [4 5]
       
       
       reverse(arr.begin()+i,arr.begin()+end);
   }
        
    }
};
