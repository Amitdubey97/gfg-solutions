class Solution {
  public:
    int minProd(vector<int>& arr) {
        // code here
         
        int n = arr.size();
        if(n ==1) return arr[0];
        
        int cntneg = 0 , cntzero = 0;
        int maxneg = INT_MIN;
        int minpos = INT_MAX;
        long long prod = 1;
        
        for (int x:arr){
            if(x == 0){
                cntzero++;
                continue;
            }
            if(x<0){
                cntneg++;
                maxneg = max(maxneg,x);
            }
            else{
                minpos = min(minpos,x);
            }
            prod *=x;
        }
        
        // case -1 : sab elelment zero
        if (cntzero==n) return 0;
        
        //case-2 : koi negative nahi hai
        if(cntneg == 0){
            if(cntzero >0){
                return 0;
            }else{
                return minpos;
            }
        }
        //case-3 negative ki count even hai
        //poora prod postive ho jaega , min nahi milega
        //isliye sabse chhote negative wale ko product se hata do
        if(cntneg %2 ==0){
            prod/=maxneg;
        }
        // agar zero bhi hai, to 0 bhi ek valid option hai
        if(cntzero>0){
            return min((long long)0, prod);
        }
       return (int)prod;
    }
};