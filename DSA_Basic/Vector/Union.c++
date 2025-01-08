//Use a 'Union method" remove Duplicates in tow diffrent array

#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector<int> unionMethod(vector<int>arr1, vector<int>arr2,int  n, int m){
  //declear a set 
  set<int> st;

  for(int i=0; i<n; i++){
    st.insert(arr1[i]);
  }
  for(int i=0; i<m; i++){
    st.insert(arr2[i]);
  }

  vector<int>temp;
  for(auto it : st){
    temp.push_back(it);
  }
  return temp;
}

int main(){

  vector<int>arr1 = {1,2,3,4,5};
  vector<int>arr2 = {1,2,3,6,7,3};

  int n = arr1.size();
  int m = arr2.size();

vector<int>ans = unionMethod(arr1,arr2,n,m);
 for(int i=0; i<ans.size(); i++){
  cout<< ans[i] <<" ";
 }


  return 0;
}

