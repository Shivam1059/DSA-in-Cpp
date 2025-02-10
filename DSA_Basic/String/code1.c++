//String array


#include<iostream>
#include<string>
#include<vector>
using namespace std;


int getLength(char arr[], int size){

  int count = 0;
  int index = 0;
  for(int index = 0; index < size; index++)
  if(arr[index]== '\0'){
    break;
  }
  else{
    count++;
  }
  return count;
}

int main(){
 
  //creations
  char arr[100];

  cout<<" Enter youe name : "<<endl;
  cin>>arr;
  cout<< getLength(arr,1000) << endl;
  

  //input
  // cin>>arr;
  //input
  // cin.getline(arr,100);

 //input 
//  cin.getline(arr, 100, '\t');    //  '/t'  t is delimeter 

  //print
  // cout<<" Your name is : " << arr <<endl;
  // cout<< arr[0] << "->"<< (int)arr[0] << endl;
  // cout<< arr[2]<< "->" <<(int)arr[1] <<endl;
  // cout<< arr[2]<< "->"<< (int)arr[2]<<endl;
  // cout<< arr[3]<<  "->"<< (int)arr[3]<<endl;
  // cout<< arr[4]<< "->"<< (int)arr[4]<<endl;
  // cout<< arr[5]<< "->"<< (int)arr[5] <<endl;
  // cout<< arr[6]<< "->"<< (int)arr[6]<<endl;  //null carecter

  
  

  return 0;
}


