#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello"; 
    string str2("World"); 
    // string str3; 
   string str3;
   str3 = str1+str2;
    // cout << "Enter a string: ";
    // getline(cin, str3);  // Takes full input with spaces

    // cout << "Concatenated string: " << str1 + " " + str2 << endl;
    cout << "New string: " << str3 << endl;

    return 0;
}
