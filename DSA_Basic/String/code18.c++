// leetcode 2391


#include<iostream>
#include<string>
#include<vector>

using namespace std;
int garbagecollectionTime(vector<string>&garbage, vector<int>&travel){
 //trackP
    int garbageP = 0;
    int travelP = 0 ;
    int lasthouseP = 0;
 //trackM
    int garbageM = 0;
    int travelM = 0 ;
    int lasthouseM = 0;
  //trackG
   int garbageG = 0;
   int travelG = 0 ;
   int lasthouseG = 0;


  for(int i=0; i<garbage.size(); i++){
      string  currHouse  = garbage[i];
    for(int j=0; j<currHouse.size(); j++){
      char garbageType = currHouse[j];

      if(garbageType == 'P'){
        garbageP++;
        lasthouseP = i;
      }
      
      else if(garbageType == 'M'){
        garbageM++;
        lasthouseM = i;
      }
      else if(garbageType == 'G'){
        garbageG++;
        lasthouseG = i;
      }
    }
  }

  for(int i=0; i<lasthouseP; i++){
    travelP += travel[i];
  }
  for(int i=0; i<lasthouseM; i++){
    travelM += travel[i];
  }
  for(int i=0; i<lasthouseG; i++){
   travelG += travel[i];
  }

int totalTravelTime = travelP + travelM + travelG;
int totalgarbageTime = garbageP + garbageM + garbageG;

int total = totalgarbageTime + totalTravelTime ;
return total;

}


int main(){

vector<string>garbage = {"G", "P", "GP", "GG"};
vector<int>travel = {2,4,3};


int ans = garbagecollectionTime(garbage, travel);
cout<<" Total time : "<<ans;
  return 0;
}