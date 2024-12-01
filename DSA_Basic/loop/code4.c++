//Break ,and continue 

#include<iostream>
using namespace std;

int main(){

int n ;
cout<<"Enter number is : ";
cin>>n;

// for(int i=1; i<=n; i++){
//     cout<<i<<endl;
//   if(i==50){
//     break;  //using brak
//   }
// }


//Note: Continue that means skip the current itreation;
for(int i=1; i<=n; i++){
  if(i==50){
    continue;  //using continue
  }
    cout<<i<<endl;
}
return 0;

}