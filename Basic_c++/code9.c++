//Switch case 
//Note Switch case our using oprtionl of if-else ,statment


#include<iostream>
using namespace std;

int main(){

char grade;
cout<< " Enter you grade : ";
cin>>grade;

switch(grade) {
  case 'A': 
    cout <<"You got > 90% "<<endl;
    break;
  case 'B': 
    cout <<"You got > 70% "<<endl;
    break;

  case 'C':
    cout <<"You got > 60% "<<endl;
     break;

  case 'D': 
    cout <<"You got > 33% "<<endl;
     break;

  default : cout <<" Bha tu toh fail hogya"<<endl;
}


  return 0;
}
