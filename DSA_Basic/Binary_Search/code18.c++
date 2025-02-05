//Pivot value 

#include<iostream>
#include<vector>

using namespace std;

int getPivotvalue(vector<int>arr, int n){
  int s = 0; 
  int e = n-1;
  int mid = s + (e - s)/2;

  while(s <= e){
    int mid = s + (e - s)/2;

    //start hi end ho 
    if(s==e){
      return s;
    }
    // mid hi pivot value  ho 
    if(mid < n-1 && arr[mid] > arr[mid+ 1]){ 
        //ADD boundary cheak for "" mid < n-1 "
      return mid;
    }

    if(mid > 0 && arr[mid] < arr[mid-1]){
      //ADD boundary cheak for "" mid > 0 "
      return mid-1;
    }

   // Line A
   if(arr[mid] < arr[s]){
      e = mid - 1;
   }//Line B
   else{
     s = mid + 1;
   }
  }
return -1;
}
int main(){
 
  vector<int>arr = {50, 60, 70 ,80,10, 20, 20 ,40};
  int n = arr.size();

 int pivotIndexValue = getPivotvalue(arr,n);
 cout<<" Pivot Value : "<<pivotIndexValue;

  return 0;
}