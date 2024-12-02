//

#include<iostream>
using namespace std;

int main(){

// for(int i =0; i<=5; i++){
//   cout<<"OUTER lOOP  ->:"<<i<<endl;
//   for(int j=0; j<=5; j++){
//     cout<<"Inner Loop : " <<j<<endl;
//   }
// }


//Print Square patter 
// int n;
// cin>>n;

//   //Outer loop
// for(int i=0; i<n; i++){
//   //Inner loop
//   for(int j=0; j<n; j++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }


//print Reactange pattern
// int n, m;
// cout<<"Enter you row lenght : ";
// cin>>n;
// cout<<"Enter you col lenght : ";
// cin>>m;

// for(int row=0; row<n; row++){
//   for(int col=0; col<m; col++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

//print holl reactange pattern
int n, m;
cout<<"Enter row number : ";
cin>>n;
cout<<"Enter col number : ";
cin>>m;
for(int row=0; row<n; row++){
  for( int col=0; col<m; col++){
    if(row==0 || row == n-1){
       cout<<"* ";
    }
    else{
       if(col==0||col==m-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
  }
   cout<<endl;
}

  return 0;
}