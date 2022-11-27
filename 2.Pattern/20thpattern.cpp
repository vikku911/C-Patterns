#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i,j;
 
  for(i=1; i<=n; i++)
  {     
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }
  
        for(j=1; j<=i; j++){
             
            cout<<j;
      
        }
        for(int t = 1; t<=i-1; t++){
            cout<<t;
        }
   
        cout<<endl;
  }
}
/*

4
   1
  121
 12312
1234123

*/