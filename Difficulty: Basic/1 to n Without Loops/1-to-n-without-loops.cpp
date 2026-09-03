class Solution {
  public:
    void printTillN(int n) {
        if(n>1) printTillN(n-1);
        printf("%d ", n);
    }
};