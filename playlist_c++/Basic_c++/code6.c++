//conditional statement if, if-else, else-if,

#include<iostream>
using namespace std;

int main(){

int age;
cout<<  "Enter your age" <<endl;
cin>>age;
if(age >= 5){
  cout<<" We are going to school"<<endl;
}



// int age = 16;

// if(age >= 18){
//   cout<<"You can  vote"<<endl;
//  }else{
//   cout<<"You can not vote"<<endl;
//  }


int marks;
cout<<"Enter your marks : "<<endl;
cin>>marks;

if (marks > 90){
  cout << "A+" << endl;
}
else if (marks > 75){
  cout<<"A"<<endl;
}
else if (marks > 60){
  cout<<"B"<<endl;
}
else if(marks >= 33){
  cout<<"D"<<endl;
}
else{
  cout<<"Best of luck of next time"<<endl;
}


  return 0;
}