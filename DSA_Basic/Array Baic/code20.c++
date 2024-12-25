//move all zerp element to end;

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[8] = {1,2,0,4,3,0,5,0};
int n = 8; 
        sort(arr, arr+n);

        for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
        }


  return 0;
}
