//STL Function of vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  //declaration of vector

  vector<int>vec;

  //insertion
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);

  vec.push_back(40);
  vec.push_back(60);

//size
int ans =  vec.size();
 cout<<" size of vec : " << ans<<endl ;

//capacity
vec.capacity();
cout<<" Capacity : " <<vec.capacity();

 //insert value from begin & end
 vec.insert(vec.begin(), 70);
 vec.insert(vec.end(), 80);

//pop 
vec.pop_back();

//erase 
vec.erase(vec.begin());

//clear
//vec.clear();

//assign
//vec.assign(6,100);

 vector<int>::iterator it;
for(auto it = vec.begin(); it != vec.end(); it++ ){
  cout<<*it<<endl;
}
//get value front & back
cout<<"Front : "<< vec.front()<<endl;
cout<< "Back : "<<vec.back()<<endl;


  return 0;
}

