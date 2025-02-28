// Debug the code. Sort vowels in a string. Characters are alphabets.


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;
// bool isVowel(char ch){
//   return (ch == 'A'||ch =='E'||ch == 'I'|| ch == 'O' || ch == 'U');
// }
// string sortVowel(string&s){

//   vector<char>vowel;
//   for(int i=0; i<s.size(); i++){
//     if(isVowel(s[i])){
//       vowel.push_back(s[i]);
//     }
//   }
//   if(vowel.empty()) return s;

//   sort(vowel.begin(), vowel.end());

//   string t = "";
//   for(int i=0; i<vowel.size(); i++){
//      t.push_back(vowel[i]);
//   }
//   return t;
// }

bool isVowel(char ch) {
  ch = toupper(ch);
  return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}

string sortVowels(string s) {
  string t = s;
  vector<char> vowel;
  
  for(int i=0;i<s.length();i++){
      if(isVowel(s[i])) vowel.push_back(s[i]);
  }
  
  if(vowel.size()==0) return s;
  
  sort(vowel.begin(), vowel.end());
  
  int j=0;
  for(int i=0;i<t.length();i++){
      if(isVowel(t[i])) {
          t[i]=vowel[j++];
      }
  }
  
  return t;
}

int main(){
  string s = "BACDIHESUZO";
  string ans = sortVowels(s);
  cout<<" ans : "<<ans;

}