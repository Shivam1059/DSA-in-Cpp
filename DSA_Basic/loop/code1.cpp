#include<iostream>
using namespace std;

// int main(){
// int i =10;

// for(int i=10; i<=12; i++){
//   cout<<" Monika is my darling"<<endl;
// }

//   return 0;
// }

int main(){
  // for(int i=2; i<= 20; i= i+2){
  //   cout<<i<<endl;
  // }
  // for(int i=10; i>=0; i= i-2){
  //   cout<<i<<endl;
  // }


  for(int i =0; i<3; i= i+1){
    cout<<endl<<"Outer loop"<<i<<endl;

    for(int j =0; j<3; j= j+1){
      cout<<" Inner loop"<<j<<endl;
    }
  }

  return 0;
}