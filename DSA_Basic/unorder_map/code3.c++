//Single Number 


#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int findvalue(vector<int>nums){

  unordered_map<int, int>freq;
  for(int i=0; i<nums.size(); i++){
    int num = nums[i];
    freq[num] = freq[num] + 1;
  }

  unordered_map<int, int>::iterator it;
  int ans ;
  for(it = freq.begin(); it != freq.end(); it++){
    int key = it->first;
    int freq = it->second;

    if(freq == 1){
      ans = key;
      break;
    }
  }
  return ans;
}

int main(){
  
  vector<int>nums = {4,1,2,1,2};
  int answer = findvalue(nums);
  cout<<answer;


  return 0;
}