//Leetcode : 1209. Remove All Adjacent Duplicates in String II


#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s, int k) {
        string ans = "";
        int len = s.length();
        for(int i=0; i<len; i++){
          if(s[i] == s[i+k])
             ans.push_back(s[i++]);
         

        }

      while(s.find(ans) != string::npos){
      s.erase(s.find(ans),ans.length());
    }
    return s;
       
}
int main(){

  string s = "deeedbbcccbdaa";
  int k = 3;
 cout<<"ans :  "<<removeDuplicates(s, k)<<endl;

}