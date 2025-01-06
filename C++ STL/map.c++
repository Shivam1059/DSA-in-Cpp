//Map

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  //creation
  unordered_map<string, string>table;

  //insertion
  table["in"] = " Indian ";
  table.insert(make_pair("en","England"));

  pair<string, string>p;
  p.first = "br";
  p.second = "brazil";

  table.insert(p);

//size
  cout<<table.size()<<endl;

//clear
// table.clear();

//size
cout<<table.size()<<endl;

//index
cout<< table.at("in") <<endl;
table.at("in")  = "Indonation";//update key uisng "at"

table["in"] = "Indian 2";//update for using "[]"
cout<< table.at("in") <<endl;


//empty
if(table.empty() == true){
  cout<<" Table is empty"<<endl;
}
else{
  cout<<" Table is non-empty"<<endl;
}

//earser
table.erase(table.begin(), table.end());
cout<<table.size()<<endl;

//Itreator

// unordered_map<string ,string>::iterator it = table.begin();

// while(it != table.end()){
//   pair<string, string> p = *it;
//   cout<<p.first<<" "<<p.second<<endl;
//   it++;
// }

  return 0;
}
