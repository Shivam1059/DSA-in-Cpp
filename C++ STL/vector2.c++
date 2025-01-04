//VECTOR STL 

#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<int>nums(5,9);

 int ans = nums.back();
 int ans1 = nums.front();

 nums.push_back(50);
 nums.push_back(70);

 nums.pop_back();
cout<<ans<<endl;;
cout<<ans1<<endl;;

for(int i=0; i<nums.size(); i++){
  cout<<nums[i]<<" ";
}


  return 0;
}
