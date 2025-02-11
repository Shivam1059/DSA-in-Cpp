//Sting operation 


#include<iostream>
#include<string>

using namespace std;
int main(){

   stirng name = "Hellow jee kese ho app";
   stirng word = "kese";
   
   int ans = name.find(word);
   cout<<ans<<endl;
  
  //  string names = "Hello i am shivam  who are you";
  //  cout<< names.substr(7,15)<<endl;
  //  cout<< names.substr(5);

  //  string fName = "Shivam";
  //  string lName = "Ahirwar";
  //  string ans = fName + " " + lName;
  //  cout<< ans <<endl;

  // string name = "Maharan Pratap";
  // auto it = name.begin();
  // while(it != name.end()){
  //   cout<< *it <<" ";
  //   it++;
  // }
  // cout<<endl;

  // cout<<name[0]<<endl;
  // cout<<name.at(0)<<endl;

  // cout<<name.front()<<endl;
  // cout<<name.back()<<endl;
  // cout<<name.length()<<endl;
  


  return 0;
}