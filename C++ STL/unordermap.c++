//Unordered map

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

  unordered_map<int, int>table;

  //insertion
  table[1] = 53;
  table[2] = 54;
  table[3] = 55;


  table[2] = 54;// reassign value




//anther syntax
for(auto it : table){
  int key = it.first;
  int value = it.second;
  cout<<"key : "<<key<<" "<<"value : "<<value<<endl;
}

// find table of content using 
if(table.find(2) != table.end()){
    cout<<" Found : ";
    int value = table[2];
    cout<< value <<endl;
}   
else{
  //not found
  cout<<" It is not found";
}

// deletion
  table.erase(3);

//itreate
unordered_map<int, int>::iterator it;
for( it = table.begin(); it != table.end(); it++){
   int key = it->first;
   int value = it->second;
   cout<<"key : "<<key << " "<<"value : "<< value <<endl;
}


  return 0;
}