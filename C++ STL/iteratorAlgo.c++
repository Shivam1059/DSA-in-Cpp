

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printDouble(int a){
  cout<< 2*a << " ";
}

bool checkEven(int a ){
  return a%2 == 0;
}

int main(){
 
 vector<int> arr(6);
 arr[0] = 11;
 arr[1] = 60;
 arr[2] = 10;
 arr[3] = 11;
 arr[4] = 10;
 arr[5] = 60;


// auto it = unique(arr.begin(), arr.end());

// arr.erase(it, arr.end());
// for(int a : arr){
//   cout << a <<" ";
// }


 auto it = partition(arr.begin(), arr.end(), checkEven);
 for(int a : arr){
  cout<<a<<" ";
 }


// auto it = unique(arr.begin(), arr.end());

// arr.erase(it, arr.end());
// for(int a : arr){
//   cout<<a<<" ";
// }


// int target = 40;

// sort(arr.begin(),arr.end());
// for(int a : arr){
//   cout<< a << " ";
// }cout<<endl;

// reverse(arr.begin(), arr.end());
// for(int a : arr){
//   cout<< a <<" ";
// }
// cout<<endl;

// rotate(arr.begin() , arr.begin()+3, arr.end());
// for(int a : arr){
//   cout<<a<<" ";
// }





//for_each(arr.begin(), arr.end() ,printDouble);

// int ans = count(arr.begin(), arr.end(), target);
// cout<<ans<<endl;

// int ans = count_if(arr.begin(), arr.end(), checkEven);
// cout<<ans;


// auto it = find(arr.begin(), arr.end(), target);


// auto it = find_if(arr.begin(), arr.end(), checkEven);
// cout << *it <<endl;

  return 0;
}