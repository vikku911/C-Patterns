#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i,j;
  int k=0;
  for(i=1; i<=n; i++){
      
    for(j=1; j<=i; j++){
     k= k+1;
      cout<<k;
     
    }
   cout<<endl;
  }
}
/*
4
1
23
456
78910
*/