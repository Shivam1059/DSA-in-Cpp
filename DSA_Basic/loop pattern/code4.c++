//Numaric Hollow inverted half Pyramid
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;

//   for(int row=0; row<n; row++){
//     for(int col=row+1; col<=n; col++){
//       if(col==row+1||col==n||row==0){
//          cout<<col<<" ";
//       }
//       else{
//          cout<<"  ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }


//numaric Palindrome equilateral pyramid
#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int row=0; row<n; row++){
    //space
    for(int col=0; col<n-row; col++){
      cout<<" ";
    }
    for(int col=0;col<row+1; col++){
      if(col==0||col==n){
        cout<<1<<" ";
      }
      else{
        cout<<col+1<<" ";
      }
    }
    cout<<endl;
  }


  return 0;
}