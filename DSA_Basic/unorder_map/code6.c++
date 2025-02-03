//Problem  :  Single number

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int singleNumber(vector<int>&nums){
 unordered_map<int, int>freq;

int n = nums.size();


for(int i=0; i<n; i++){
    freq[i]++;
}

unordered_map<int, int>:: iterator it;
int ans ; 
for( it = freq.begin(); it != freq.end(); it++){
    int key = it->first;
    int freq = it->second;
  
   cout<<key<<" "<<freq<<endl;

    if( freq == 1)
      ans = key;
    break;
}
return ans;

}


int main(){
 
 vector<int>nums = {2,2,3,3,5,5,8};
 int n = nums.size();

int answer = singleNumber(nums);
cout<<answer;

  return 0;
}
