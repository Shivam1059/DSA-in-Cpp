// //Find Peak Value of Mountain

// //solve that using Store and Compute method
// #include<iostream>
// #include<vector>

// using namespace std;
// int peakVlaueMauntain(vector<int>&arr, int n){

//   int s = 0, e = n-1;
//   int ans = -1;

//   while(s <= e){
//      int mid = s + (e -s)/2;
//     //PEAK VALUE IN RIGH SIDE
//     if(arr[mid] < arr[mid + 1]){
//         s = mid + 1;
//     }else{
//       ans = mid;
//       e = mid -1;
//     }
//   }
//   return ans;
// }

// int main(){

//   vector<int>arr = { 10,20,70,60,80,30,15,5};
//   int n = arr.size();
//   int ans = peakVlaueMauntain(arr, n);
//   cout<<" Peak value is : "<<ans;


//   return 0; 
// }


#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>

using namespace std;
int peakvalue(vector<int>arr, int n){
  
  int max = INT_MIN;
  int maxIndex = -1;
  for(int i=0; i<arr.size(); i++){
    if(arr[i] > max){
      max = arr[i];
      maxIndex = i;
    }
  }
  return maxIndex;
  
}

int main(){
   vector<int>arr = {50, 60 ,70, 10 ,20 ,30 ,40};
   int n = arr.size();

   int ans = peakvalue(arr, n);
   cout<<" Peak value of index : "<<ans;
}
