// //#Leetcode 1047

// #include<iostream>
// #include<string>
// using namespace std;

// string removeDuplicates(string s) {
//   int n = s.length();
//   string str = " ";
//   for(int i=0; i<n; i++ ){
//      char currCharector =  s[i];
//      if(str.empty()){
//       str.push_back(currCharector);
//      }
//      else if(currCharector == str.back()){
//         str.pop_back();
//      }
//      else if(currCharector != str.back()){
//        str.push_back(currCharector);
//      }
//   }
//    return str;
// }

// int main(){

//  string s = "abbaca";
// string ans = removeDuplicates(s);
// cout<<ans;


//   return 0;
// }


#include<iostream>
#include<string>
using namespace std;
bool validPalindrome(string s) {
  // int n = s.size();
  int n = s.length();
  int st = 0, end = n-1;
  while(st <= end){
      if(n==1)
      return true;
     else if(s[st]==s[end]){
          st++;
          end--;
      }else{
          false;
      }
  }
 return true;
}

int main(){
  string s = "aba";
  int  ans = validPalindrome(s);
  cout<<ans;
}