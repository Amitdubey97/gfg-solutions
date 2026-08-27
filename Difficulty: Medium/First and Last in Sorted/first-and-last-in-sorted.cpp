class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        vector<int> value;
        
        for(int i=0;i<n;i++){
            if(arr[i] == x){
                value.push_back(i);
               
            }
            
        }
        
        if(value.empty()){
            return {-1,-1};
        }
        return {value[0],value[value.size()-1]};
    }
}; // time complexity = O(n) ..... brute approach