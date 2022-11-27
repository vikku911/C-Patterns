#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i,j;
  
  for(i=1; i<=n; i++)
  {     
        
  
        for(j=0; j<=n-i; j++){
      
            cout<<"*";
      
        }
   
        cout<<endl;
  }
}
/*

4
****
***
**
*

*/