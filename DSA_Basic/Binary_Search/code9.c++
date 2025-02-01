//Peak element
 #include<iostream>
 #include<vector>
 using namespace std;

int cheackPeakVlaue(vector<int>arr, int n){
  int s = 0, e = n-1;

  while(s <= e){
    int mid = s + (e -s)/2;
    if(arr[mid] > arr[mid + 1])
        e = mid;
    else 
      s = mid + 1;
  }
  return s;
}

bool isValidPeakvalue(vector<int>&arr, int index){
  int n = arr.size();

  if(index < 0 || index >= n) return false;

  if((index == 0 || arr[index] > arr[index -1]) && (index == n-1 || arr[index] > arr[index] > arr[index + 1])){
    return true;
  }
   return false;
}


 int main(){

  vector<int>arr = {1,2,10,5,7,20,3};
  int n = arr.size();

int ans = isValidPeakvalue(arr, n);
cout<<ans ;


  return 0;
 }