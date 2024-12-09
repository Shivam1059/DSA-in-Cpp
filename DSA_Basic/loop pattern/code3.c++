//Numaric Hollow payramid 

#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
  for(int row=1; row<n; row++){
    for(int col=1; col<row+1; col++){
      if(row==1|| row==n-1){
        cout<<col<<" ";
      }else{
        if(col==1||col==row+1-1){
          cout<<col;
        }else{
          cout<<"  ";
        }
      }
    }
    cout<<endl;
  }
  return 0;
}
