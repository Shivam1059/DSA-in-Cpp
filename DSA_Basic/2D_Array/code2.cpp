//creating 2D array
#include<iostream>
using namespace std;

int main(){

//creating 2D array
int arr[3][4];

//Taking INPUT
for(int i=0; i<3; i++){
  for(int j=0; j<4; j++){
    cin>>arr[i][j];
  }
}


//print 
for(int i=0; i<3; i++){
  for(int j=0; j<4; j++){
    cout<<arr[i][j]<<" ";
  }
cout<<endl;
}

  return 0;
}