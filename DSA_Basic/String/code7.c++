//Palindromuc Substring   leetcode - 647
#include<iostream>
#include<string>

using namespace std;
int expoandAroundCentor(string s, int i ,int j ){
  int count = 0;
  while(i>=0 && j<s.length() && s[i] == s[j]){
      count++;
      i--;
      j++;
  }
 return  count;
}
int countSubstrings(string s) {
  int n = s.length();
  int totalCount = 0;
  for(int centor =0; centor<n; centor++){
      //odd
      int i = centor;
      int j = centor;
      int oddSubstingkaCount = expoandAroundCentor(s,i,j);

      //even
       i = centor;
       j = centor+1;
      int evenSubstingkaCount = expoandAroundCentor(s,i,j);
      totalCount =  totalCount  + oddSubstingkaCount +   evenSubstingkaCount;
  }
  return totalCount;
}


int main(){

  string s = "babbar";//for Even
  // string s = "aaa";//odd
  cout<< countSubstrings(s);
  
}
