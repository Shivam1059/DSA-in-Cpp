//Hashmap
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //declaretion of map
    unordered_map<int, int>table;

    table[1] = 20;
    table[2] = 30;
    table[3] = 40;
    table[4] = 50;

    table[2] = 60;
    

    unordered_map<int, int>::iterator it;
    for(it = table.begin(); it != table.end(); it++){
     int  key = it->first;
     int  value = it->second;
      cout<<" key "<<key<< " value : " <<value<<endl;
      
    }

    //onter synatx to frint table value , key
    for(auto it : table)
    {
      int key = it.first;
      int value = it .second;
      cout<< " key  "<<key<<" value : "<<value<<endl;
    }

    //find //table .mao is bhaut fast (avg case comp) 0(1)
    if(table.find(2) != table.end())
    {
      //found
      int value = table[2];
      cout<<"Found : "<< value <<endl;
      
    }
    else {
      //not found
      cout<<" Not Found "<<endl;
    }

    table.erase(2);

    cout<<" After erase "<<endl;
      for(auto it : table)
    {
      int key = it.first;
      int value = it .second;
      cout<< " key  "<<key<<" value : "<<value<<endl;
    }

    
  return 0 ;
}