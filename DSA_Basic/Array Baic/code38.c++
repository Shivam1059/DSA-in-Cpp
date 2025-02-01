//K-th element of two Arrays gfg problem
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findvalue(int a[], int b[], int n, int m, int k){
   vector<int>num ;
        for(int i=0; i<n; i++){
             num.push_back(a[i]);
        }
        for(int i=0; i<m; i++){
              num.push_back(b[i]);
        }
        sort(num.begin(),num.end());
        
        if(k > 0 && k <= num.size()){
            return num[k -1];
        }else{
          return -1;
        }
}

int main(){
int n = 4;
int m = 4;

 int a[n] = {1, 2, 3, 4};
 int b[m] = {5, 6, 7, 8}; 

int k = 6;
 
int ans = findvalue(a,b,n,m,k);
cout<<ans;

 return 0;       

}
