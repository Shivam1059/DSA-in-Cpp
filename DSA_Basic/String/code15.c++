#include<iostream>
#include<string>

using namespace std;

bool isValidAnagram(string &s, string &t){
   int n = s.size();
   int m = t.size();
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(s[i] == s[j]){
       i++, j++;
       return true;
      }
    }
   }
   return false;
}



int main(){
  string s = "rat";
  string t = "car";
  cout<<isValidAnagram(s, t);
}