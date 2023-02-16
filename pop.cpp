#include<iostream>
using namespace std;
//program for a positive integer multiplication table
int main(){
    int n ;
    cout<<"Enter a positve number";
    cin>>n;
    for (int i = 1; i <= 10; ++i){
        cout<< n << " * "<< i <<" = "<< n * i<<endl;
    }

return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
// int n;

// cout<< "Enter a positive integer: ";
// cin>>n;

// for (int i = 1; i <= 10; ++i) {
// cout << n << " * " << i << " = " << n * i << endl;
// }

// return 0;
// }