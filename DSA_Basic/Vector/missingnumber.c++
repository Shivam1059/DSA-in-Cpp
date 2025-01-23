//Missing element

#include<iostream>
#include<vector>

using namespace std;

int main(){
  
  vector<int>v = {1,3,5,3,4};
  v.insert(v.begin(), 7);

  //7 -> 0 --no work

  //visiting with -1
  for(int i=0; i<v.size(); i++){
     int index = abs(v[i]);
     if(v[index] > 0){
      v[index] *= -1;
     }
  }

  for(int i=1; i<v.size(); i++){
    cout<< v[i]<<" ";
  }
  cout<<endl;
 int missing = -1;
  for(int i=1; i<v.size(); i++){

    if(v[i] > 0){
       missing = i;
      break;
    }
  }
 cout<<" missing value : "<<missing<<endl;

  return 0;
}