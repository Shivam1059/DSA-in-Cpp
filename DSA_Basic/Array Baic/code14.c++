// shifting method

// #include<iostream>
// using namespace std;

// void rotatedArray(int arr[], int n,int shift){
//    int finalShift = shift%n;

//    if(finalShift == 0){
//       return ;
//     }

//     int temp[1000];
//     int index = 0;
//     for(int i=n-finalShift ; i<n; i++){
//          temp[index] = arr[i];
//          index++;
//     }

//     for(int i=n-1;i>=0; i--){
//       arr[i] = arr[i-finalShift];
//     }

//     for(int i=0; i<finalShift; i++){
//       arr[i] = temp[i];
//     }
// }

// int main(){

//   int arr[6] = {10, 20, 30, 40, 50, 60};
//   int size = 6;

//   int shift = 4;
   

//    cout<<"Before :"<<endl;
//    for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;

// rotatedArray(arr,size,shift);

//    cout<<"After : "<<endl;
//    for(int i=0; i<size;i++){
//      cout<<arr[i]<<" ";
//    }
//      cout<<endl;

//   return 0;
// }




#include<iostream>
using namespace std;

void rotedArray(int arr[], int n, int shift){
  int finalshift = shift%n;

  if(finalshift == 0){
    return ;
  }

  int temp[1000];
  int index = 0;
  for(int i=n-finalshift; i<n; i++){
    temp[index] = arr[i];
    index ++;
  }
  
  for(int i=n-1;i>=0; i--){
    arr[i] = arr[i-finalshift];
  }

  for(int i=0; i<finalshift;i++){
    arr[i] = temp[i];
  }

}


int main(){
 int arr[6] = {11,22,33,44,55,66};
 int size = 6;

int shift = 2;


cout<<"before: "<<endl;
for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
}
rotedArray(arr,size,shift);

cout<<"after: "<<endl;
for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
}
  return 0;
}