///vector


#include <iostream>
#include <vector>
using namespace std;

  void print(vector<int> v){
    int size = v.size();

    for(int i=0; i<size; i++){
      cout<< v[i]<<" ";
    }
    cout<<endl;
  }

int main(){

  // vector<int> v;

  // while(1){
  //   int d;
  //   cin>>d;
  //   v.push_back(d);
  //   cout<<"Cpacity : "<<v.capacity()<<"  Size : "<<v.size()<<endl;
  // }

vector<int> v; //vector initialization

// //inset element
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);

// print(v);
// //delete element to vector

// cout<<"Delet of element to the vector"<<endl;
// v.pop_back();
// print(v);

//take a input in vector
int n;
cin>>n;
for(int i=0; i<n; i++){
   int d;
   cin>>d;
   v.push_back(d);
}
print(v);
   v.pop_back();
print(v);




  return 0;
}