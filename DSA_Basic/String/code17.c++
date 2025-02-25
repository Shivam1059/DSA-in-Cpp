
#include<iostream>
#include<vector>
#include<string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
  string ans = "";
  for(int i=0; i<strs.size(); i++){
      for(int j=0; j<strs.size(); j++){
          if(strs[j++] == strs[i++])
            ans = strs[j];
      }
  }
  return ans;
}
  int main(){

    vector<string> str = {"flower","flow","flight"};
    cout<<longestCommonPrefix(str);
  }

