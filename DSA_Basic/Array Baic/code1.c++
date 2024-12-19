//Basic array question
 
 
//sum of tow element
// #include<iostream>
// using namespace std;

// int main(){
// int a;
// cout<<"Enter the value of a : ";
// cin>>a;
// int b;
// cout<<"Enter the value of b : ";
// cin>>b;

// int sum = a + b;
// cout<<"Sum of a and b is : "<<sum<<endl;

//   return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Input array elements
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Reading each element into the array
    }

    int index1, index2;

    // Input the indices of the elements to sum
    cout << "Enter the indices of the two elements to sum (0-based index): ";
    cin >> index1 >> index2;

    // Check for valid indices
    if (index1 >= 0 && index1 < n && index2 >= 0 && index2 < n) {
        // Calculate the sum if indices are valid
        int sum = arr[index1] + arr[index2];
        cout << "The sum of elements at indices " << index1 << " and " << index2 << " is: " << sum << endl;
    } else {
        // Print error if indices are invalid
        cout << "Error: Invalid indices!" << endl;
    }

    return 0; // End the program
}



