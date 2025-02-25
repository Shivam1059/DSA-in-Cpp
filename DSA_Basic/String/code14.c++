//leetcode 917

#include<iostream>
#include<string>
#include<vector>

using namespace std;
string reverseString1(string &s1){
  int n = s1.size();
  int i=0,  j = n-1;
  while(i<j){
    swap(s1[i++],s1[j--]);
  }
 return s1;
}

string reverseString2(string &s2){
  int n = s2.size();
  int i=0,  j = n-1;

  while(i<j){
    if(s2[i] == '-'){
      i++;
      continue;
    }
    if(s2[j] == '-'){
      j--;
      continue;
    }
    swap(s2[i], s2[j]);
    i++;
    j--;
  }
 return s2;
}

int main(){
   string s1 = "ab-cd";
 
  string s2 = "a-bC-dEf-ghIj";
  
   cout<<reverseString1(s1)<<endl;
   cout<<reverseString2(s2);
   return 0;
   
}