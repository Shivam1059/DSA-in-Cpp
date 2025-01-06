// Stack STL operation


#include<iostream>
#include<stack>
using namespace std;

int main(){

//creation 
stack<int> st;

//insertion
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

//cheak size of st
cout<<" size of st : "<<st.size() <<endl;

//remove elelmemt using pop
st.pop();
cout<<st.size() <<endl;

//top most elelment of stack
cout<<"top element of stack : "<<st.top() <<endl;

//empty operation
if(st.empty() == true){
  cout<< " stack is empty "<<endl;
}else{
  cout<<" stack is non- empty"<<endl;
}

  return 0;
}
