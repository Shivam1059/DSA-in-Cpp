 //2 's complement

// #include<iostream>
// #include<vector>

// using namespace std;
// vector<int> findComplement(vector<int>binary){

//   int n = binary.size();
//   vector<int>twoComp(n + 1, 0);

//   //step 1  flip value
//   for(int i = n-1, k = twoComp.size()-1;  i>=0; i--, k--){
//     twoComp[k] = binary[i] == 0 ? 1 : 0;
//   }

//   //step 2 add 1;
//   int carry = 1;
//   for(int i = n-1; i>=0; i--){
//     int sum = twoComp[i] + carry;
//     twoComp[i] = sum % 2;
//     carry = sum / 2;
//   }
//   if(carry)
//     twoComp[0] = carry;

//   return twoComp;
// }

// int main(){

//   vector<int>binary = {1,1,1,0,1,0,1,1,0};
//   vector<int>twoComp = findComplement(binary);

//   for(int i=0; i< twoComp.size(); i++){
//     cout<< " "<<twoComp[i];
//   }cout<<endl;

//   return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

vector<int> findComplement(vector<int>binary){
  int n = binary.size();
  vector<int>towsum(n + 1, 0);

  //step 1 flip
  for(int i=n-1, k=towsum.size()-1; i>=0; i--,k--){
     towsum[k] = binary[i] == 0 ? 1 : 0;
  }

  //steo 2
  int carry = 1;
  for(int i = n-1; i>=0; i--){
    int sum = towsum[i] + carry;
     towsum[i] = sum % 2;
     carry = sum/2;
  }

  if(carry)
  towsum[0] = carry;

   return towsum;
}


int main(){

 vector<int>binary = {1,1,1,0,1,0};
 vector<int>towsum = findComplement(binary);

 for(int i=0; i< towsum.size(); i++){
    cout<< " "<< towsum[i] ;
 }cout<<endl;

  return 0;
}