#include<iostream>
#include<vector>
using namespace std;

int numberOfBeams(vector<string>& bank) {
  int n = bank.size();
  int countDevice = 0;
  for(int i=0; i<n; i++){
      for(int j=0; j<bank[i].size(); j++){
         if(bank[i][j] == '1'){
            countDevice++;
         }
      }
  }
  return countDevice;
} 

int main(){

  vector<string>bank = {"011001","000000","010100","001000"};
  int ans = numberOfBeams(bank);
  cout<<ans;
}