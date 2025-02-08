// //Swap to Array 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void swapingTwoarray(vector<int>arr1,vector<int>arr2){
//   int n = arr1.size();
//   int m = arr2.size();

//   for(int i=0; i<n; i++){
//      for(int j=0; j<m; j++){
//      swap(arr1[i],arr2[j]);
//     }
//     cout<<arr1[i]<<" ";
//   }
// }



// int main(){

//    vector<int>arr1 = {10,20,30,40,50};
//    vector<int>arr2 = {60,70,80,80,100};

//    swapingTwoarray(arr1,arr2);
  

//   return 0;
// }


//Swap array temp

#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<int>nums = { 20,30,40,50,60 ,70,80,90,100};
  int n = nums.size();

  int temp = 0;
  for(int i=0; i<n; i=i+2){

     temp = nums[i];
     nums[i] = nums[i+1];
     nums[i+1] = temp;
     
  }
  for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
  }
    

    return 0;
}