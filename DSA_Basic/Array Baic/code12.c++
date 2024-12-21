//print all pair
#include<iostream>
#include <utility>
using  namespace std;

void printPair(int arr[], int size){
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      cout<<"["<<arr[i]<<", "<<arr[j]<<"]"<<endl;
    }
  }
}

// pair<int,int> towSum(int arr[], int size,int target){
//   pair<int,int> ans = make_pair(-1,-1);
//   for(int i=0; i<size; i++){
//     for(int j=0; j<size; j++){
//       if(arr[i]+arr[j] == target){
//         //fount a pair
//         // return true;
//          ans.first = arr[i];
//          ans.second = arr[j];
//          return ans;
//       }
//     }
//   }
//   return ans;
// }

//four sum
pair<int,int,int,int> fourSum(int arr[], int size, int target){
  pair<int,int,int,int> ans = make_pair(-1,-2,-1,-2);
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      for(int k=0; k<size; k++){
        for(int l=0; l<size;l++){
          if(arr[i]+arr[j]+arr[k]+arr[l] == target){
            ans.first  = arr[i];
            ans.second = arr[j];
            ans.three  = arr[k];
            ans.fourth = arr[l];
            return ans;
          }
        }
      }
    }
  }
  return ans;
}

int main(){

 int arr[5] = {10, 20, 30,40, 50, };
 int n = 5;
pair<int,int,int,int>ans = fourSum(arr,n,100);
if(ans.first == -1 && ans.second == -2 && ans.three == -1 && ans.four == -2){
  cout<<"pair is not found"<<endl;
}else{
  cout<<"Pair is found ["<<ans.first<<","<<ans.second<<","<<ans.three<<","<<ans.fourth<<"]"<<endl;
}


// bool ans  = towSum(arr, n, 70);
// if(ans == true){
//   cout<<" Piar found"<<endl;
// }
// else{
//   cout<<" Pair not found";
// }

//two sum
// int arr[5] = {10,5,20,15,30};
// int n = 5;
// pair<int,int>ans = towSum(arr,n,50);
// if(ans.first == -1 && ans.second == -1){
//   cout<<"pair not found "<<endl;
// }
// else{
//   cout<<"pair found "<<"["<<ans.first<<" ,"<<ans.second<<"]"<<endl;
// }
  return 0;
}
