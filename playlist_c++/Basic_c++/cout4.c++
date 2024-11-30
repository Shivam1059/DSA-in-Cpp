//Opertors
#include<iostream>
using namespace std;

int main(){
int a = 10;
int b = 5;


cout<<" Arithametoic opertor"<<endl;
//arithametic opertor
cout<< a+b <<endl;
cout<< a-b <<endl;
cout<< a*b <<endl;
cout<< a/b <<endl;
cout<< a%b <<endl;


cout<<" relational opertor"<<endl;
// relational opertor
cout<< (a>b) <<endl;
cout<< (a<b) <<endl;
cout<< (a>=b) <<endl;
cout<< (a<=b) <<endl;
cout<< (a==b) <<endl;
cout<< (a!=b) <<endl;

cout<<" assigment opertor"<<endl;
// relational opertor
a += 10;
cout<<a<<endl;
a -= 10;
cout<<a<<endl;
a *= 10;
cout<<a<<endl;
a /= 10;
cout<<a<<endl;

//logical operator
cout<<" logical opertor"<<endl;
int num1 = (10>5);
int num2 = (10>8);
int num3 =  (30 > 25);

cout<<(num1 && num2 && num3)<<endl;

  return 0;
}