#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
 for(int i=1; i<=n; i++){
     for(int j=0;j<n-i+1; j++){
         cout<<"*";
     }
     cout<<endl;
 }
        
    

    return 0;
}
