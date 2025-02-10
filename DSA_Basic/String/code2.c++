// repalce charecter
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

// int getLength(char arr[])

// void replaceCharecter(char originalChar, char newChar, char arr[], int size){
//   for(int i=0; i<size; i++){
//     if(arr[i]  == originalChar){
//        arr[i] = newChar;
//     }
//   }
 
// }

// int  getLength(char arr[], int size){
//   int index = 0;
//   int count = 0;
//   for(int index=0; index<size; index++){
//     if(arr[index]=='\0')
//        break;
//     else 
//       count++;  
//   }
//   return count;
// }

// void convertIntoUpperCase(char arr[], int n){
//   int len = getLength(arr, n);
//   for(int i=0; i<len; i++){
//     char ch = arr[i];
//     if( ch >= 'a' && ch <= 'z'){
//       ch = ch -'a' + 'A';
//     }
//       arr[i] = ch; 
//   }
// }

// void convertIntoLowerCase(char arr[], int n){
//   int len = getLength(arr, n);
//   for(int i=0; i<len; i++){
//     char ch = arr[i];
//     if( ch >= 'A' && ch <= 'Z'){
//       ch = ch -'A' + 'a';
//     }
//       arr[i] = ch; 
//   }
// }

// void reverseChar(char arr[], int n){
//   int len = getLength(arr,n);
//    int s = 0, e = len-1;
//    while(s <= e){
    
//       swap(arr[s], arr[e]);
//       s++;
//       e--;
//    }
// }

// bool cheackPelindrom(char arr[], int n){
//       int len = getLength(arr, n);
//       int i = 0;
//       int j = len-1;
//       while(i<=j){
//         if(arr[i] == arr[j]){
//              i++;
//              j--;
//            }
//         else{
//             return false;
//         }
//       }
//       return true;
     
// }
int main(){

  char arr1[1000];
  char arr2[1000];
  char arr3[1000];

  cout<<"Enter  Input 1 : ";
  cin.getline(arr1, 1000);
  cout<<"Enter  Input 2 : ";
  cin.getline(arr2, 1000);

  strcat(arr3, arr1);
  strcat(arr3, arr2);
  cout<<" New string :  "<< arr3 <<endl;

  // cout<<getLength(arr, 1000)<<endl;
  // replaceCharecter('@',' ', arr, 1000);
  // convertIntoUpperCase(arr,100);
  // convertIntoLowerCase(arr,100);
  // cout<<getLength(arr, 1000)<<endl;
  // cout<<" Before arr :  "<<arr<<endl;
  // reverseChar(arr,1000);
  // cout<<"Palindrom : "<<cheackPelindrom(arr,1000)<<endl;
  // cout<< arr <<endl;

  return 0;
}