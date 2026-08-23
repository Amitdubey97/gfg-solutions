class Solution {
  public:
    int convertFive(int n) {
        // code here
        if(n==0) return 5;
        
        int place = 1;
        int result = 0;
        
        while(n>0){
            int digit = n %10;
            if(digit == 0){
                digit = 5;
            }
            result += digit *place;
            place *= 10;
            n/= 10;
        }
        return result;
    }
};