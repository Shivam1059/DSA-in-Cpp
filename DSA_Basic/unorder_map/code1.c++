// 1's and 2's complement

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findComplement(vector<int>binary){

int n = binary.size();
vector<int>twocomp(n+1, 0);
//step 1. flip the bits
for(int i=n-1, k = twocomp.size()-1; i>=0; i--, k--){
 twocomp[k]  = binary[i] == 0 ? 1:0;
 
}
//step 2. add 1
int carry = 1;
for(int i=twocomp.size()-1; i>= 0; i--){
  int sum = twocomp[i] + carry;
  twocomp[i] = sum % 2;
  carry = sum / 2;
}
if(carry)
   twocomp[0] = carry;

  return twocomp;

}

int main(){

  vector<int>binary = {1,1,1,0,1,0,1,1,0}
  vector<int>twocomp = findComplement(binary);
  int n = twocomp.size();

  for(int i=0; i<n; i++){
    cout<<twocomp[i]<<" ";
  }
  cout<<endl;

  return 0;
}