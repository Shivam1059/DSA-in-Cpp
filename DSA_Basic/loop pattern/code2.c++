//full pyramid

#include<iostream>
using namespace std;

int main(){
  int n ;
  cin>>n;
for(int row=0; row<n; row++){
  //star
  for(int col=0; col<n-row; col++){
    cout<<" ";
  }
  //space
  for(int col=0; col<row; col++){
    cout<<"* ";
  }
  cout<<endl;
}


  return 0;
}