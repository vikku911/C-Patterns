#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i,j;
  
  for(i=1; i<=n; i++){
    int k=i-1;
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
345
4567

*/
