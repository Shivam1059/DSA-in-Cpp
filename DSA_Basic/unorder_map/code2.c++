

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> findComplement(vector<int>binary){
     int n = binary.size();
     vector<int>twoComplement(n, 0);

     //step 1.
     for(int i=0; i<n; i++){

       if(binary[i] == 0)
         twoComplement[i] = 1;
        else if(binary[i] == 1)
        twoComplement[i] = 0;
     }

     //step 2
     int carry = 1;
     for(int i = twoComplement.size()-1; i>=0; i--){
           
           int sum = twoComplement[i] + carry;
           twoComplement[i] = sum % 2;
           carry = sum/2;

           if(carry == 0){
            break;  //optimization
           }
     }
    
    return twoComplement;
}

int main(){

  vector<int>binary = {0,1,1,0,1};
  vector<int>twoComplement =  findComplement(binary);

  for(int i=0; i<twoComplement.size(); i++){
    cout<<twoComplement[i]<<" ";
  }cout<<endl;


  return 0;
}
