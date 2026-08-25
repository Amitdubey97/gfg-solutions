class Solution {
  public:
    int minMoves(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n==0) return 0;
        vector<int> pos(n+1);// position store krne k liye 
        
        for(int i =0; i<n; i++){
            pos[arr[i]] = i; //har element ki position store karenge
            
        }
        int longest = 1;
        int current = 1;
        
        //consecutive values check karenge
        for(int i = 2; i<=n; i++){
            if(pos[i] > pos[i-1]){
                current++;
            }
            else{
                current =1;
            }
            longest = max(longest, current);
        }
        // jo elements keep nahi kiya unko move karna padega
        return n- longest;
    }
};