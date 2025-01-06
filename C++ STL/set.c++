//Set : store always unique value 

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

 //creation

//set<int> st; //order
 unordered_set<int> st;//unorder

//insert
 st.insert(10);
 st.insert(30);
 st.insert(40);
 st.insert(10);
 st.insert(50);


 //size
//  cout<<st.size()<<" "<<endl;

//clear
// st.clear();
//  cout<<st.size()<<" "<<endl;

//count
if(st.count(40) == 1){
  cout<<" found "<<endl;
}
if(st.count(15)==0){
  cout<<" not found "<<endl;
}

//find
// if(st.find(40) != st.end()){
//   cout<<" found"<<endl;
// }
// else{
//   cout<<" Not found"<<endl;;
// }

//erase
st.erase(st.begin(), st.end());
 cout<<st.size()<<" "<<endl;


//empty
if(st.empty()){
  cout<<" set is empty"<<endl;
}
else{
  cout<<"set is not empty"<<endl;
}
//traverse
unordered_set<int>::iterator it = st.begin();

while(it != st.end()){
  cout<< *it <<" ";
  it++;
}
  return 0;
}
