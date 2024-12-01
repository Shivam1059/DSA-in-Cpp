//Nesteed loop

#include<iostream>
using namespace std;

int main(){

  //outer loop
  for(int i =1; i<5; i++){
    cout<<"Outer loop :"<<i<<endl;
    for(int j=11; j<15; j++){
      cout<<"Inner loop "<<j<<endl;
    }
    cout<<endl;
  }
  



  return 0;
}