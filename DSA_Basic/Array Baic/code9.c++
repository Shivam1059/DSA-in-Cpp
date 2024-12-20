//using fill method

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

//    int a[10];

//    fill(a,a+5,67);
//    fill(a+5,a+10,80);

//    for(int i=0; i<10;i++){
//     cout<<i<<" --> "<<a[i]<<" "<<endl;
//    }
//   return 0;
// }


//diff nethod of swap
#include<iostream>
using namespace std;

int main(){

  // //1. swap inbulid fun.
  // int a = 5;
  // int b = 8;

  // swap( a, b);
  // cout<< "a : "<<a<<" b : "<<b<<endl;

  // //2. temp variable
  //  int x = 8;
  //  int y = 10;

  //  int temp = x;
  //   x = y;
  //   y = temp;

  //   cout<<"x : "<<x<<" Y : "<<y;

  //3. arithematic method   "It is Interview question"
  // int a = 5, b = 9;
  // a = a + b;
  // b = a - b;
  // a = a - b;

  // cout<<"a : "<<a<<", b : "<<b;

  //4.XOR Method "It is interview question "
  int a = 5;
  int b = 6;

 a = a ^ b;
 b = b ^ a;
 a = a ^ b;

cout<<"a : "<<a<<", b : "<<b; 

  return 0;
}
