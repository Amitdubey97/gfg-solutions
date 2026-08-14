class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int reverse = 0;
        while(n>0){
            int num = n%10;
            reverse = reverse *10 + num;
            n=n/10;
        }
        return reverse;
    }
};