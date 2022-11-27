#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i,j;
  
  for(i=1; i<=n; i++)
  {     
        for(int space = 0; space < n-i; ++space)
            cout << " ";
  
        for(j=1; j<=i; j++){
      
            cout<<"*";
      
        }
   
        cout<<endl;
  }
}
/*

4
   *
  **
 ***
****

*/