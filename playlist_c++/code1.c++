//check prime or not prime
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%2 == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"It is a Prime Number "<<endl;
    }else{
        cout<<"It is not a Prime Number"<<endl;
    }

    return 0;
}