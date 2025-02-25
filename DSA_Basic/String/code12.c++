//leetcode problem 2125. Number of Laser Beams in a Bank

#include<iostream>
#include<vector>
using namespace std;

//func for count devic
int numberofDevice(vector<string>& bank) {
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

int countDevices(string&binary){
  int c = 0; 
  for(auto b : binary)
    c += b -'0';
  return c;
}
int numberofBeams(vector<string>& bank){
   vector<int>devices;
   for(auto row : bank)
    devices.push_back(countDevices(row));
   
   int beams = 0; 
   for(int i=0; i<devices.size(); i++){
      int j = i + 1;
      while(j < devices.size()){
       beams += devices[i]*devices[j];
        if(devices[j] == 0)
          j++;
        else
          break;
      }
  }
  return beams;
}
int main(){

  vector<string>bank = {"011001","000000","010100","001000"};
  int ans = numberofDevice(bank);
  int Beams = numberofBeams(bank);
  cout<<" Number of Beams :  "<< Beams<<endl;
  cout<<"Number of Device : "<<ans;
}