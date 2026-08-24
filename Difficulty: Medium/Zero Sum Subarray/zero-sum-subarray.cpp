class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_set<int> st; // har sum ke bad sum ki value isme store hogi
         int sum = 0; // initially sum 0
         
        for(int i = 0; i<n ; i++){
             sum += arr[i]; // sum me har value ko add karo
             
             // chek karo agar sum = 0 mil gya
              if(sum ==0) return true;
              
              // check karo (st) me agar same prefix ka sum pehle aa chka hai , 
              // to dono ke beech ka sum 0 hoga
              if(st.find(sum) != st.end())
              return true;
              
              // agar upar ke dono hi false hai to st me current sum ko store karo
              st.insert(sum);
            
            
        }
        return false; //koi zero subarray sum nahi mila
    }
};