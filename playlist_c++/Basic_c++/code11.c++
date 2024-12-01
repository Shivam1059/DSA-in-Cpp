//Desigan making if-else statment

// #include<iostream>
// using namespace std;

// int main(){

// int budget;
// cout<<"Enter your budget : "<<endl;

// //input
// cin>>budget;

// if(budget > 200000){
//   cout<<"You can buy scorpio" <<endl;
// }
// else{
//   cout<<"You can not buy scorpio"<<endl;
// }
//   return 0;
// }



//if-esle , eslse if statment 

// #include<iostream>
// using namespace std;

// int main(){

// int marks;
// cout<<"Enter your marks"<<endl;
// cin>>marks;

// if(marks >= 90){
//    cout<<"A+"<<endl;
// }
// else if(marks >= 75){
//    cout<<"B"<<endl;
// }
// else if(marks >= 60){
//    cout<<"C"<<endl;
// }
// else if(marks >= 33){
//    cout<<"D"<<endl;
// }
// else {
//    cout<<"Bhai tu to fail ho gaya yar "<<endl;
// }
//   return 0;
// }


//Nested if else 
#include<iostream>
using namespace std;

int main(){
int marks;
cout<<"Enter your marks"<<endl;
cin>>marks;

if(marks > 90){
  cout<<"You get a A+ Score"<<endl;
  if(marks = 100){
    cout<<"You are  get mert-lest Topper "<<endl;
  }
  else{
    cout<<"A"<<endl;
  }
}
else if(marks >= 70){
  cout<<"Youa are pass with 'B' "<<endl;
}
else if(marks >=60 ){
  cout<<"Youa are pass with 'c' "<<endl;
}
else if(marks >=33 ){
  cout<<"Youa are pass with 'D' "<<endl;
}
else {
  cout<<"yar tu to fail ho gaya  "<<endl;
}
  return 0;
}