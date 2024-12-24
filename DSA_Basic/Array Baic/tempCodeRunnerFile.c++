int findlargest(int arr[], int n){
    // sort(arr, arr+6);
    int num = arr[0];
   for(int i=0; i<n; i++){
      if(arr[i]>num)
       num = arr[i];
   }
    return num;
}