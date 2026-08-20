class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        
  
        int n = mat.size();
        int m = mat[0].size();

        vector<int> ans;
        int top = 0;
        int right = m-1;
        int left =0;
        int bottom = n-1;

        while(top<=bottom && left <= right){

          //left to right ke liye
          for(int j= left; j<= right; j++){
              ans.push_back(mat[top][j]);
          }
          top ++;

          //top to bottom
          for(int i = top; i<= bottom; i++){
              ans.push_back(mat[i][right]);
          }
          right --;

          //right to left
          if(top<= bottom){
              for(int j = right;j>=left;j--){
                  ans.push_back(mat[bottom][j]);

              }
              bottom --;
          }
         // bottom to top
         if(left<= right){
          for(int i = bottom; i>= top;i--){
              ans.push_back(mat[i][left]);
          }
          left ++;
         }
        }
         return ans;
      }

  };