//Map

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  //creation unordermap
  // unordered_map<string, string>table;

  //creation ordermap
  // map<string, string>table;
  //insertion
  // table["in"] = " Indian ";
  // table.insert(make_pair("en","England"));

  // pair<string, string>p;
  // p.first = "br";
  // p.second = "brazil";

  // table.insert(p);

//size
  // cout<<table.size()<<endl;

//clear
// table.clear();

//size
// cout<<table.size()<<endl;

//index
// cout<< table.at("in") <<endl;
// table.at("in")  = "Indonation";//update key uisng "at"

// table["in"] = "Indian 2";//update for using "[]"
// cout<< table.at("in") <<endl;


//empty
// if(table.empty() == true){
//   cout<<" Table is empty"<<endl;
// }
// else{
//   cout<<" Table is non-empty"<<endl;
// }

//count
// if(table.count("in") == 0){
//   cout<<"key not found"<<endl;
// }
// if(table.count("in") == 1){
//   cout<<" Key is found"<<endl;
// }

// //find
// if(table.find("in") != table.end()){
//   cout<<" Key is found"<<endl;
// }
// else{
//   cout<<" Key is not found"<<endl;
// }

//earser
// table.erase(table.begin(), table.end());
// cout<<table.size()<<endl;

//Itreator

//for unorder map
// unordered_map<string ,string>::iterator it = table.begin();

// map<string ,string>::iterator it = table.begin();  //for order map

// while(it != table.end()){
//   pair<string, string> p = *it;
//   cout<<p.first<<" "<<p.second<<endl;
//   it++;
// }

map<int , string> table;

table.insert(make_pair(2,"love"));
table.insert(make_pair(1,"Nandani"));
table.insert(make_pair(3,"shivay"));

map<int ,string>::iterator it = table.begin();  //for order map

while(it != table.end()){
  pair<int , string> p = *it;
  cout<<p.first<<" "<<p.second<<endl;
  it++;
}
  return 0;
}
