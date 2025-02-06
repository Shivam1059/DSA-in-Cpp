// //Debug the code. Find square root of x.

#include<iostream>
using namespace std;

int mySqrt(int x) {
        if (x == 0)
            return x;

        int first = 1, last = x;
         int mid = first + (last - first) / 2;
         int ans = 0;

        while (first <= last) {
            int mid = first + (last - first) / 2;

            if (mid == x / mid)
                return  mid;

            else if (mid  > x/mid) {
                last = mid -1;
            }
            else 
                first   = mid + 1;
        }
        return last;
    }

int main(){
    
    int x = 37;
    int ans = mySqrt(x);
    cout<<" Squar root : "<<ans;
  
  return 0;
}



// #include<iostream>
// using namespace std;

// int mySqurt(int n){
  
//    int s = 0;
//    int e = n;
//    int mid = (s + e)>>1;
   
//    int ans = 0;
//    while(s <= e){
//     int mid = (s + e)>>1;
//     if(mid*mid == n)
//       return mid;

//     else if(mid*mid < n){
//          ans = mid ;
//           s = mid + 1;
//     }else
//        e = mid -1;
//    }
//    return ans;
// }

// int main(){
 
//  int n = 17;
//  int ans = mySqurt(n);
//  cout<<" Squar root : "<<ans;


//   return 0;
// }