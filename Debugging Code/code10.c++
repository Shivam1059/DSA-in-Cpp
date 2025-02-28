
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string  addBinary(string a, string b) {
  string ans;
  int carry = 0;
  int i = a.length() - 1;
  int j = b.length() - 1;

  while (i >= 0 || j >= 0 || carry) {
    if (i >= 0)
      carry += a[i--] - '0';
    if (j >= 0)
      carry += b[j--] - '0';
    ans += carry % 2 + '0';
    carry /= 2;
  }

  reverse(ans.begin(), ans.end());
  return ans;
}


int main(){

string a = "1011";
string b = "1101";

string  sam = addBinary(a, b);
cout<< "  ans : "<<sam;

  return 0;
}

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string addBinary(string a, string b) {
//     string ans;
//     int carry = 0;
//     int i = a.length() - 1;
//     int j = b.length() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//         if (i >= 0)  
//             carry += a[i--] - '0';  // Process last digit first
//         if (j >= 0)  
//             carry += b[j--] - '0';  // Process last digit first
//         ans += (carry % 2) + '0';   // Store the binary sum
//         carry /= 2;                 // Update the carry
//     }

//     reverse(ans.begin(), ans.end()); // Reverse the final string
//     return ans;
// }

// int main() {
//     string a = "1011"; // Binary representation of 11
//     string b = "1101"; // Binary representation of 13

//     string sam = addBinary(a, b);
//     cout << "Binary Sum: " << sam << endl;

//     return 0;
// }
