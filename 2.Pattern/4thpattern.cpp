#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i,j;
  for(i=1; i<=n; i++){
      
    for(j=1; j<=n; j++){
      int k= n-j+1;
      cout<<k;
     
    }
   cout<<endl;
  }
}
/*
4
4321
4321
4321
4321
*/